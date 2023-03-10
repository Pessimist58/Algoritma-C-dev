/* soru 52: Girilen kelimenin karakter sayısını hesaplayan program */


#include <stdio.h>
#include <string.h> /*Bu kütüphaneyi metin kullanmak için ekledim */
 
main()
{
      char kelime[100]; /* Deger tanımlıyoruz */ 
      int uzunluk = 0; /* Deger tanımlıyoruz */ 
      printf("Bir kelime giriniz :");  /* Ekrana Yazdırma komutudur */
      gets(kelime);  /* Klavyeden girilen kelime değeri alıyoruz */
      fflush(stdin); /* daha düzgün çalışmasını sağlıyor */
 
      uzunluk = strlen(kelime); /* kelimenin karakter sayısını alıyoruz */
 
      printf("%s kelimesi %d karakter sayisina sahiptir.",kelime,uzunluk);  /* Ekrana Yazdırma komutudur */
   
}