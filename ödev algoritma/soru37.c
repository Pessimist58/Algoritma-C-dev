/* soru 37: Girilen 10 sayı içerisinde en büyük ve en küçük olan sayıları bulan program */

#include <stdio.h>
 
main()
{
 	int sayilar[10],sayac = 0, enbuyuk,enkucuk;  /* Deger tanımlıyoruz */ 
 
 	for(sayac=0 ; sayac < 10; sayac++) /* 10 kere sayı yazdıran for döngüsü*/
 	{
 	printf("%d. sayiyi giriniz : ",sayac+1); /* Ekrana Yazdırma komutudur */ 
  	scanf("%d",&sayilar[sayac]); /* Klavyeden girilen sayilar değeri alıyoruz */
  
  	if( sayac == 0 )/* eğer sayac eşitse 0 alttakini değerlendirir */
   	enkucuk = sayilar[0]; 
 
  	if( sayilar[sayac] > enbuyuk ) /* eğer sayilar büyükse enbuyukten alttakini değerlendirir */
  	enbuyuk = sayilar[sayac];
 
  	if( sayilar[sayac] < enkucuk ) /* eğer sayilar kücükse enkucukten alttakini değerlendirir */

  	 enkucuk = sayilar[sayac]; 
 }
 
 printf("\n En Büyük Sayi : %d ",enbuyuk);  /* Ekrana Yazdırma komutudur */ 
 printf("\n En Kucuk Sayi : %d ",enkucuk);  /* Ekrana Yazdırma komutudur */ 
 
}