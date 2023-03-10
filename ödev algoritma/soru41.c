/* soru 41: 5 öğrencinin boylarını ve kilolarını sorarak boy ve kilo ortalamasını bulan program */

#include <stdio.h>
main()
{
 	float boy[5],kilo[5]; /* Deger tanımlıyoruz */ 
 	float topkilo = 0, topboy =0 , ortboy=0 , ortkilo=0; /* Deger tanımlıyoruz */ 
 	int i = 0; /* Deger tanımlıyoruz */ 
 	
 	for( i=0; i<5; i++) /* 5 kadar döngüye alıyor */
 {
  	printf("\n%d. Ogrencinin",i+1);   /* Ekrana Yazdırma komutudur */ 
 
  	printf("\nBoyu : ");  /* Ekrana Yazdırma komutudur */ 
 	 scanf("%f",&boy[i]); /* Klavyeden girilen boy değerlerini alıyoruz */
 
 	 printf("Kilosu : ");  /* Ekrana Yazdırma komutudur */ 
 	scanf("%f",&kilo[i]); /* Klavyeden girilen kilo değerlerini alıyoruz */
  
 	topboy = topboy + boy[i]; /* toplam boyu hesaplıyoruz */
  	topkilo = topkilo + kilo[i]; /* toplam kiloyu hesaplıyoruz */
 }
 
	ortboy = topboy/5; /* ortalama boyu hesaplıyoruz */
 	ortkilo = topkilo/5; /* ortalama kiloyu hesaplıyoruz */
 	
 	printf("\n 5 Ogrencinin Boy Ortalamasi : %.2f ",ortkilo);  /* Ekrana Yazdırma komutudur */ 
 	printf("\n 5 Ogrencinin kilo ortalaması : %.2f ",ortboy);  /* Ekrana Yazdırma komutudur */ 
	
 
}