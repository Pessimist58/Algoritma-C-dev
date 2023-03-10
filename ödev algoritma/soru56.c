/* soru 56: Girilen bir metnin harflerini alfabetik sıraya göre sıralayan program */


#include<stdio.h>
#include<string.h> /*metin yazıcağımız için yazı olarak string kütüphanesini kullanıyoruz */ 
 
main()
 { 
   char metin[5][20], gecici[20];   /* Deger tanımlıyoruz */ 
   int i,j;  /* Deger tanımlıyoruz */ 
 
   printf("4 farkli metin giriniz : "); /* Ekrana Yazdırma komutudur */
   
   for (i = 0; i < 4; i++)/*  4 kadar döngüye alıyoruz*/
      scanf("%s", metin[i]); /* girilen metinleri alıyoruz */
 
   for (i = 1; i < 4; i++) /*  4 kadar döngüye alıyoruz*/
    {
      for (j = 1; j < 4; j++)  /*  4 kadar döngüye alıyoruz*/
	  {
         if (strcmp(metin[j - 1], metin[j]) > 0) 
		 {
            strcpy(gecici, metin[j - 1]);
            strcpy(metin[j - 1], metin[j]);
            strcpy(metin[j], gecici);
         }
      }
   }
 
   printf("\nAlfabeye gore Siralanmıs hali : "); /* Ekrana Yazdırma komutudur */
   for (i = 0; i < 4; i++) /*  4 kadar döngüye alıyoruz*/
      printf("\n%s", metin[i]);  /* Ekrana Yazdırma komutudur */
}
