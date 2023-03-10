/* soru 11: Koordinatları Verilen İki Nokta arasındaki mesafeyi bulan program */

#include <stdio.h>
#include <math.h> /* Matematik değerleri kullanmak için kütüphane  */ 

main()

{
	int x1,x2,y1,y2; /* Değer tanımlıyoruz */ 
	float aramesafe; /* Değer tanımlıyoruz */ 
	
	printf("Birinci Kordinatı Giriniz (X Y): "); /* Ekrana Yazdırma komutudur */ 
	scanf("%d %d", &x1, &y1); /* Birinci girilen kordinat değerlerini alıyoruz */ 
	
	printf("İkinci Kordinatı Giriniz: (X Y) "); /* Ekrana Yazdırma komutudur */ 
	scanf("%d %d", &x2 , &y2); /* İkinci girilen kordinat değerlerini alıyoruz */ 

	
	aramesafe =  sqrt( pow( (y2-y1),2) + pow((x2-x1),2) ) ; /* Burada iki kordinatın mesafesini hesaplıyoruz */ 

	
    printf("\n Arasındaki Mesafe : %f",aramesafe); /* Ekrana Yazdırma komutudur */ 
	
}