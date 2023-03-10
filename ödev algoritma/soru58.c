/* soru 58: Kullanıcı tarafından girilen bir metindeki kelimelerin baş harflerinin hepsini büyük harfe çeviren program */

#include <stdio.h>
#include <conio.h>
#include <string.h>
 
main()
{
      char metin[100], harf;    /* Deger tanımlıyoruz */     
       int uzunluk = 0,n = 0; /* Deger tanımlıyoruz */ 
 
      printf("Bir metin giriniz= ");  /* Ekrana Yazdırma komutudur */
	  gets(metin);   /* metin Degerini Alıyoruz */

      if( metin[0] >= 'a' && metin[0] <= 'z' ) /* metnin 0 degeri a ile z arasindaki harflerden biri ise*/
	  { 
          metin[0] = metin[0] - 32; /* metnin 0 degerinden 32 cikardik. */
      }
      while( metin[n] != '\0' )  /* metnin n degeri kelimenin son degeri degil ise */
	  {
          harf = metin[n]; /* harfi metnin n degerine esitledik. */

          if( harf == ' '  )  /* eger harf bosluk ise */
		  {
                n++; /* n degerini birer arttir. */
                harf = metin[n]; /* harf degerini metnin n degerine esitle. */
 
              if( harf >= 'a' && harf <= 'z' ) /* eger harf a ile z harfleri ve arasindaki harflerden biri ise */ 
			  { 
                    harf = harf - 32; /* harf degerinden 32 cikar */
                    metin[n] = harf; /* metnin n degerini harfe esitle. */
              }
          }
            n++; /*n degerini birer arttir. */
      }
       printf("Yeni Metin=  %s",metin); /* Ekrana Yazdırma komutudur */
 
}