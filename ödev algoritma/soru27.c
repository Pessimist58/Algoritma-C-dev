/* soru 27: Girilen bir sayının kuvvetini hesaplayan program (normal ve powla() ile) */


#include <stdio.h>
#include <math.h> /* pow kullanacağımız için matematik kütüphanesini ekliyoruz */

main()
{
	int sayi = 0 , kuvvet = 0 , sonuc = 1 , i = 0 , powislem; /* Deger tanımlıyoruz */ 
 
	printf("Bir sayi giriniz : "); /* Ekrana Yazdırma komutudur */
	scanf("%d",&sayi); /* Klavyeden girilen  sayi değeri alıyoruz */
 
	printf("Girdiğiniz sayının kaçıncı kuvveti alınacak : "); /* Ekrana Yazdırma komutudur */
	scanf("%d",&kuvvet); /* Klavyeden girilen kuvvet değeri alıyoruz */
 
 
 for( i = 1; i <= kuvvet; i++) /* döngüyle girilen kuvveti döndürüyoruz */
 {
  sonuc = sonuc * sayi; /* hesaplıyoruz kuvvet ve klavyeden girilen sayıyı */
 }
 	
	printf("\nNormal Hesaplama\n%d^%d = %d \n\n",sayi,kuvvet,sonuc); /* Ekrana Yazdırma komutudur */
	powislem = pow(sayi,kuvvet); /* powla hesaplıyoruz kuvveti */
 	
	printf("Powla Hesaplama\npow(%d,%d) = %d",sayi,kuvvet,powislem); /* Ekrana Yazdırma komutudur */

}