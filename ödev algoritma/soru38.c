/* soru 38: Kullanıcının girdiği 5 sayıyı küçükten büyüğe doğru sıralayıp listeleyen program */

#include <stdio.h>
 
main()
{
 	int sayilar[5], sayac = 0,buyuk = 0, kucuk = 0, temp = 0; /* Deger tanımlıyoruz */ 
 
 	for(sayac=0 ; sayac < 5; sayac++) /* 5 kere sayı yazdırma döngünümüz*/ 
 	{
 	 printf("%d. sayiyi giriniz : ",sayac+1); /* Ekrana Yazdırma komutudur */ 
 	 scanf("%d",&sayilar[sayac]); /* Klavyeden girilen sayilar değeri alıyoruz */
 	}
 
	 	for( buyuk=0; buyuk<4 ; buyuk++) 
 	{
 		for( kucuk = buyuk+1; kucuk<5; kucuk++)
  	{
   		if( sayilar[buyuk] > sayilar[kucuk] )
  	{
    	temp = sayilar[buyuk];
    	sayilar[buyuk] = sayilar[kucuk];
    	sayilar[kucuk] = temp;
   	}
  	}
 	}
 
	 printf("\n Kucukten buyuge siralamasi sirayla alt alta"); /* Ekrana Yazdırma komutudur */ 
 
 	for(sayac=0 ; sayac < 5; sayac++)
 	{
  	printf("\n %d",sayilar[sayac]); /* Ekrana Yazdırma komutudur */ 
 	}
 
}
