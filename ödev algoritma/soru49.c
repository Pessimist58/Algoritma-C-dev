/* soru 49: 10 karaktere kadar bir kelime girilmesini isteyen ve ekrana yazdıran program */

#include <stdio.h>
#include <stdlib.h> /*Bu kütühaneyi strlen kullanmak için eklendi */
 
main()
{
      char kelime[10]; /* Deger tanımlıyoruz */ 

      printf("\n Kelimeyi girin : "); /* Ekrana Yazdırma komutudur */
      gets(kelime); /* Klavyeden girilen kelime değeri alıyoruz */
      if(strlen(kelime) <= 10 && strlen(kelime) >0 ) /* eğer kelime 10 kelimeden küçükse ve 0dan büyükse alttaki satırı değerlendirir */
      { 
      	printf("\n Girilen Kelime : %s",kelime); /* Ekrana Yazdırma komutudur */
	  }
	  else /*değilse alttakini değerlendir */
	  printf("hatalı giriş yaptınız."); /* Ekrana Yazdırma komutudur */
     
}