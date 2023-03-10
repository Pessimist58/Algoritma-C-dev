/* soru 23: 1'den 25'e ileri ve 25'den 1'e geri sayan program */

#include <stdio.h>

main()
{
	int i; /* Deger tanımlıyoruz */ 
	
	printf("---1'den 25'e ileri----"); /* Ekrana Yazdırma komutudur */
	for(i=1; i<=25; i++) /* 1 den 25 kadar ileri döngüsü */
	{
		printf("\n%d",i); /* Ekrana Yazdırma komutudur */
	}
	printf("\n"); /* Ekrana Yazdırma komutudur */
	printf("\n---25'den 1'e geri---"); /* Ekrana Yazdırma komutudur */
	for(i=25; i>=1; i--)  /* 25 den 1 kadar geri döngüsü */
	{
		printf("\n%d",i); /* Ekrana Yazdırma komutudur */
	}
}