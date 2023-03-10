/* soru 55: kullanıcı tarafından girilen bir metnin tersini veren program */

#include <stdio.h>
#include <string.h> /*Bu kütüphaneyi metin kullanmak için ekledim */
 
main()
{
      char metin[100],ters[100];  /* Deger tanımlıyoruz */ 
      int uzunluk = 0, i = 0;  /* Deger tanımlıyoruz */ 
 
      printf("Bir metin giriniz : " ); /* Ekrana Yazdırma komutudur */
      gets(metin); /* kelimenin karakter sayısını alıyoruz */
      fflush(stdin); /* daha düzgün çalışması için kullanıyoruz*/
 
      uzunluk = strlen(metin); /* metin uzunluğunu alıyoruz*/
 
      for( i = 0 ; i < uzunluk; i++ ) /*döngü uzunluk kadar oluyor*/
      {
          ters[i] = metin[uzunluk-1-i]; /*kelimeyi tersine ceviriyoruz */
      }
 
      ters[i] = '\0'; 
      printf("\nMetnin tersi: %s",ters); /* Ekrana Yazdırma komutudur */
     
}