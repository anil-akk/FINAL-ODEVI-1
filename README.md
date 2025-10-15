🧮 Tek Haneli Rakam Toplama Programı (C)

Bu proje, kullanıcıdan iki tek haneli rakam alarak bunları toplar.
Eğer girilen değerlerden biri rakam değilse veya toplam 9’u aşarsa, kullanıcıya hata mesajı verir.
Program temel C giriş/çıkış işlemlerini, karakter tipini kontrol etmeyi ve ASCII dönüşüm mantığını öğretmek amacıyla hazırlanmıştır.

🔍 Özellikler

Kullanıcıdan iki adet karakter (rakam) alır.

Girilen karakterlerin rakam olup olmadığını isdigit() fonksiyonu ile kontrol eder.

Karakterleri ASCII tablosu mantığıyla sayısal değerlere dönüştürür.

Toplam 9’u geçerse hata mesajı verir.

Geçerli bir toplama işlemi varsa sonucu ekrana yazdırır.

💻 Kullanılan Kütüphaneler

<stdio.h> → printf() ve scanf() fonksiyonları ile giriş/çıkış işlemleri için.

<ctype.h> → isdigit() fonksiyonu ile karakter kontrolü için.

🧠 Temel Mantık

C dilinde '5' karakteri ile 5 sayısı aynı şey değildir.
Karakterleri sayıya dönüştürmek için:

int sayi = karakter - '0';


Bu işlem ASCII tablosundaki farktan yararlanarak '5' karakterini 5 sayısına çevirir.

⚙️ Çalıştırma
1️⃣ Kodu Derleme

Terminal veya komut satırında:

gcc main.c -o rakam_topla

2️⃣ Programı Çalıştırma
./rakam_topla

3️⃣ Örnek Çalışma
Lutfen ilk tek haneli rakami girin: 4
Lutfen ikinci tek haneli rakami girin: 3
Sonuc: 7


🔴 Eğer toplam 9’u aşarsa:

Lutfen ilk tek haneli rakami girin: 8
Lutfen ikinci tek haneli rakami girin: 5
Hata: Sonuc 9'u asamaz! Toplam: 13


🔴 Eğer harf gibi geçersiz bir karakter girilirse:

Lutfen ilk tek haneli rakami girin: a
Hata: Lutfen sadece tek haneli sayisal karakterler (0-9 arasi) giriniz.

🧾 Öğrenilen Konular

printf() ve scanf() kullanımı

ctype.h kütüphanesindeki isdigit() fonksiyonu

ASCII tablosu ve karakter-sayı dönüşümü

Koşul ifadeleri (if, else)

Hata yönetimi ve kullanıcı yönlendirmesi

📚 Geliştirici

👤 Anıl Ak

Eğitim amacıyla yazılmıştır.
Kod açıklamaları, karakter tipleri, ASCII farkı ve C’nin temel giriş-çıkış sistemine dair detaylı bilgiler içerir.

