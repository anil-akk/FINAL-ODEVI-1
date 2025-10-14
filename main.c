// Gerekli standart k�t�phaneleri programa dahil ediyoruz.
// stdio.h (Standard Input/Output): Ekrana yaz� yazd�rmak (printf) ve kullan�c�dan veri almak (scanf) gibi temel girdi/��kt� i�lemleri i�in kullan�l�r.
// ctype.h (Character Type): Karakterlerin tipini kontrol eden fonksiyonlar� i�erir. Biz burada bir karakterin rakam olup olmad���n� anlamak i�in isdigit() fonksiyonunu kullanaca��z.
#include <stdio.h>
#include <ctype.h>

int main() {
    // Kullan�c�dan al�nacak girdileri saklamak i�in iki adet 'char' (karakter) tipinde de�i�ken tan�ml�yoruz.
    char karakter1, karakter2;

    // 1. Kullan�c�dan Girdi Alma
    // Ekrana bir mesaj yazd�rarak kullan�c�dan ilk rakam� girmesini istiyoruz.
    printf("Lutfen ilk tek haneli rakami girin: ");
    
    // scanf fonksiyonu ile kullan�c�dan tek bir karakter okuyoruz ve 'karakter1' de�i�keninin adresine (&) kaydediyoruz.
    // "%c" format belirleyicisi tek bir karakter okuyaca��m�z� belirtir.
    // Ba��ndaki bo�luk, �nceki girdilerden kalabilecek 'newline' (\n) gibi bo�luk karakterlerini yok saymas�n� sa�lar. Bu, C'de s�k kar��la��lan bir hatay� �nler.
    scanf(" %c", &karakter1);

    // Ekrana ikinci bir mesaj yazd�rarak ikinci rakam� istiyoruz.
    printf("Lutfen ikinci tek haneli rakami girin: ");
    scanf(" %c", &karakter2);

    // 2. Girdi Do�rulama
    // isdigit() fonksiyonu, ctype.h k�t�phanesinden gelir ve bir karakterin '0' ile '9' aras�nda bir rakam olup olmad���n� kontrol eder.
    // E�er girilen karakterlerden herhangi biri (!) rakam de�ilse, program hata mesaj� verir ve sonlan�r.
    if (!isdigit(karakter1) || !isdigit(karakter2)) {
        printf("Hata: Lutfen sadece tek haneli sayisal karakterler (0-9 arasi) giriniz.\n");
        return 1; // Program�n bir hata koduyla (genellikle 0'dan farkl� bir say�) sonland���n� belirtir.
    }

    // 3. Karakterden Say�ya D�n��t�rme
    // Bu, �devin en �nemli mant�ksal ad�m�d�r. '5' karakteri ile 5 say�s� farkl�d�r.
    // Bilgisayarda karakterler ASCII tablosuna g�re bir say�sal de�ere sahiptir. �rne�in '0' karakterinin say�sal de�eri 48, '1'in 49, ..., '5'in 53't�r.
    // '5' karakterinin ASCII de�erinden '0' karakterinin ASCII de�erini ��kard���m�zda (53 - 48), sonu� olarak 5 tamsay�s�n� (integer) elde ederiz.
    int sayi1 = karakter1 - '0';
    int sayi2 = karakter2 - '0';

    // 4. Toplama ��lemi
    // Art�k karakterleri ger�ek tamsay�lara d�n��t�rd���m�ze g�re toplama i�lemini yapabiliriz.
    int toplam = sayi1 + sayi2;

    // 5. Sonucu Kontrol Etme ve Ekrana Yazd�rma
    // �devin kural�: E�er sonu� 9'u a�arsa hata mesaj� ver.
    if (toplam > 9) {
        // E�er toplam 9'dan b�y�kse, bu blok �al���r.
        // %d, printf fonksiyonuna bu noktaya bir tamsay� (integer) de�eri yazd�raca��n� s�yler.
        printf("Hata: Sonuc 9'u asamaz! Toplam: %d\n", toplam);
    } else {
        // E�er toplam 9 veya daha k���kse, bu blok �al���r.
        printf("Sonuc: %d\n", toplam);
    }

    // Program�n ba�ar�yla (hata olmadan) tamamland���n� i�letim sistemine bildiriyoruz.
    // Genellikle 0, ba�ar� anlam�na gelir.
    return 0;
}
