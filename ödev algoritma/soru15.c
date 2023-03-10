/* soru 15: Klavyeden girilen harfin sesli harf olup olmadığını kontrol eden program */

#include <stdio.h>
#include <stdlib.h>

main()
{

	char harf = ' '; /* Deger tanımlıyoruz */ 
	printf("Bir harf giriniz \n");  /* Ekrana Yazdırma komutudur */ 
	scanf("%c", &harf); /* harf Degerini Alıyoruz */
	
	 if( harf == 'A'|| harf == 'a'|| harf == 'E'|| harf == 'e'|| harf == 'I'|| harf  == 'ı'|| harf == 'İ'|| harf == 'i' || harf == 'U' || harf == 'u' || harf == 'Ü' || harf == 'ü '|| harf == 'O' || harf == 'o' || harf == 'Ö' || harf == 'ö')
	{
		printf("Sesli Harftir"); /* Ekrana Yazdırma komutudur */ 
	}
	else /* değilse */
	{
		printf("Sessiz Harftir"); /* Ekrana Yazdırma komutudur */ 
	}
}
