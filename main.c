// Gerekli standart kütüphaneleri programa dahil ediyoruz.
// stdio.h (Standard Input/Output): Ekrana yazý yazdýrmak (printf) ve kullanýcýdan veri almak (scanf) gibi temel girdi/çýktý iþlemleri için kullanýlýr.
// ctype.h (Character Type): Karakterlerin tipini kontrol eden fonksiyonlarý içerir. Biz burada bir karakterin rakam olup olmadýðýný anlamak için isdigit() fonksiyonunu kullanacaðýz.
#include <stdio.h>
#include <ctype.h>

int main() {
    // Kullanýcýdan alýnacak girdileri saklamak için iki adet 'char' (karakter) tipinde deðiþken tanýmlýyoruz.
    char karakter1, karakter2;

    // 1. Kullanýcýdan Girdi Alma
    // Ekrana bir mesaj yazdýrarak kullanýcýdan ilk rakamý girmesini istiyoruz.
    printf("Lutfen ilk tek haneli rakami girin: ");
    
    // scanf fonksiyonu ile kullanýcýdan tek bir karakter okuyoruz ve 'karakter1' deðiþkeninin adresine (&) kaydediyoruz.
    // "%c" format belirleyicisi tek bir karakter okuyacaðýmýzý belirtir.
    // Baþýndaki boþluk, önceki girdilerden kalabilecek 'newline' (\n) gibi boþluk karakterlerini yok saymasýný saðlar. Bu, C'de sýk karþýlaþýlan bir hatayý önler.
    scanf(" %c", &karakter1);

    // Ekrana ikinci bir mesaj yazdýrarak ikinci rakamý istiyoruz.
    printf("Lutfen ikinci tek haneli rakami girin: ");
    scanf(" %c", &karakter2);

    // 2. Girdi Doðrulama
    // isdigit() fonksiyonu, ctype.h kütüphanesinden gelir ve bir karakterin '0' ile '9' arasýnda bir rakam olup olmadýðýný kontrol eder.
    // Eðer girilen karakterlerden herhangi biri (!) rakam deðilse, program hata mesajý verir ve sonlanýr.
    if (!isdigit(karakter1) || !isdigit(karakter2)) {
        printf("Hata: Lutfen sadece tek haneli sayisal karakterler (0-9 arasi) giriniz.\n");
        return 1; // Programýn bir hata koduyla (genellikle 0'dan farklý bir sayý) sonlandýðýný belirtir.
    }

    // 3. Karakterden Sayýya Dönüþtürme
    // Bu, ödevin en önemli mantýksal adýmýdýr. '5' karakteri ile 5 sayýsý farklýdýr.
    // Bilgisayarda karakterler ASCII tablosuna göre bir sayýsal deðere sahiptir. Örneðin '0' karakterinin sayýsal deðeri 48, '1'in 49, ..., '5'in 53'tür.
    // '5' karakterinin ASCII deðerinden '0' karakterinin ASCII deðerini çýkardýðýmýzda (53 - 48), sonuç olarak 5 tamsayýsýný (integer) elde ederiz.
    int sayi1 = karakter1 - '0';
    int sayi2 = karakter2 - '0';

    // 4. Toplama Ýþlemi
    // Artýk karakterleri gerçek tamsayýlara dönüþtürdüðümüze göre toplama iþlemini yapabiliriz.
    int toplam = sayi1 + sayi2;

    // 5. Sonucu Kontrol Etme ve Ekrana Yazdýrma
    // Ödevin kuralý: Eðer sonuç 9'u aþarsa hata mesajý ver.
    if (toplam > 9) {
        // Eðer toplam 9'dan büyükse, bu blok çalýþýr.
        // %d, printf fonksiyonuna bu noktaya bir tamsayý (integer) deðeri yazdýracaðýný söyler.
        printf("Hata: Sonuc 9'u asamaz! Toplam: %d\n", toplam);
    } else {
        // Eðer toplam 9 veya daha küçükse, bu blok çalýþýr.
        printf("Sonuc: %d\n", toplam);
    }

    // Programýn baþarýyla (hata olmadan) tamamlandýðýný iþletim sistemine bildiriyoruz.
    // Genellikle 0, baþarý anlamýna gelir.
    return 0;
}
