/* soru 39: 10 tane sayının çift,tek ve asal olanlarını ayru ayrı listeleyen program */

#include <stdio.h>
 
main()
{ 
 	int sayilar[10] = {2,11,15,36,41,47,67,56,39,31}; /* Deger tanımlıyoruz */ 
 	int sayac = 0 , sayi = 0; /* Deger tanımlıyoruz */ 
 	char asal; /* Deger tanımlıyoruz */ 
 
 	printf("\n Cift Sayilar : "); /* Ekrana Yazdırma komutudur */ 
 
 	for(sayac = 0;sayac<10;sayac++)  /* 10 tane sayıyı döngüye alıyoruz*/
 {
 	 if (sayilar[sayac]%2 == 0 ) /* eğer sayilar sayac modu 0 eşitşe alttakini değerlendirir */
   	printf("%d\t",sayilar[sayac]); /* Ekrana Yazdırma komutudur */ 
 }
 
	 printf("\n\n Tek Sayilar : "); /* Ekrana Yazdırma komutudur */ 
 
 	for(sayac = 0;sayac<10;sayac++)  /* 10 tane sayıyı döngüye alıyoruz*/
 {
  	if( sayilar[sayac]%2 != 0 )  /* eğer sayilar sayac modu 0 eşit değilse alttakini değerlendirir */
  	 printf("%d\t",sayilar[sayac]); /* Ekrana Yazdırma komutudur */ 
 }
 
 	printf("\n\n Asal Sayilar : "); /* Ekrana Yazdırma komutudur */ 
 
 	for(sayac = 0;sayac<10;sayac++)  /* 10 tane sayıyı döngüye alıyoruz*/
	 {
 	 asal = 'E'; 
 
  	for( sayi = 2; sayi < sayilar[sayac] ; sayi++ ) 
 	 {
  	 if( sayilar[sayac]%sayi == 0 )
   	{
    	asal = 'H';
    	break;
   	}
  	}
 
 		 if( asal == 'E' )
 		  printf("%d\t",sayilar[sayac]);
 }
 
}