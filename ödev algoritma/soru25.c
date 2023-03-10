/* soru 25: Girilen bir sayı için çarpım tablosunu yazdıran program */

#include <stdio.h>
 
 main()
{
	int sayi,i; /* Deger tanımlıyoruz */ 
	
	printf("Bir sayi giriniz : "); /* Ekrana Yazdırma komutudur */
	scanf("%d",&sayi);/* Klavyeden girilen değeri alıyoruz */
 
 
	printf("\n%d sayısının çarpım tablosu :",sayi); /* Ekrana Yazdırma komutudur */
 
	for(i=1;i<=10;i++) /* 1 den 10 kadar bir arttıran döngü */
	{
	printf("\n %d * %d = %d",sayi,i,(sayi*i) ); /* Ekrana Yazdırma komutudur */
	}
 
}