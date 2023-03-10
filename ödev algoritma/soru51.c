/* soru 51: Ayrı ayrı girilen adı ve soyadı bilgilerini birleştirerek tam adını gösteren program */


#include <stdio.h>
#include <string.h> /*string yazı metni olduğu için bu kütüphaneyi kullandım */
 
main()
{
      char ad[40], soyad[40], tamad[100]; /* Deger tanımlıyoruz */ 
 
      printf("\nAdinizi girin lutfen:"); /* Ekrana Yazdırma komutudur */
      gets(ad); /* Klavyeden girilen ad değerini alıyoruz */
      fflush(stdin); /* daha düzenli çalışmasını sağlıyor */
 
      printf("\nSoyadinizi girin lutfen:"); /* Ekrana Yazdırma komutudur */
      gets(soyad); /* Klavyeden girilen soyad değerini alıyoruz */
      fflush(stdin); /* daha düzenli çalışmasını sağlıyor */
 
      strcpy(tamad,ad); /* birleştiriyoruz */
      strcat(tamad," "); /* birleştiriyoruz */
      strcat(tamad,soyad); /* birleştiriyoruz */
 
      printf("\nAdi Soyadi : %s",tamad); /* Ekrana Yazdırma komutudur */
}