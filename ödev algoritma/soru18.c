/* soru 18: Basit dört işlem ve modüler aritmetik işlemi yapabilen program */

#include <stdio.h>

int main()
{
	int sayi1,sayi2,toplam,cikar,carpim; /* Deger tanımlıyoruz */ 
	float bolme;  /* Deger tanımlıyoruz */ 
	
	printf("Birinci Sayıyı Giriniz = "); /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&sayi1); /* Birinci Sayı Degerini Alıyoruz */
	printf("Ikinci Sayiyi Giriniz = "); /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&sayi2); /* İkinci Sayı Degerini Alıyoruz */
	
	
	toplam=sayi1+sayi2; /* Birinci Sayı ve İkinci sayıyı topluyoruz */
	cikar=sayi1-sayi2; /* Birinci Sayı ve İkinci sayıyı Çıkarıyoruz */
	carpim=sayi1*sayi2; /* Birinci Sayı ve İkinci sayıyı Çarpıyoruz */
	bolme=(float)sayi1/(float)sayi2; /* Birinci Sayı ve İkinci sayıyı Bölüyoruz */
	
	printf("Toplam: %d \n",toplam); /* Toplama işleminin sonucunu ekrana yazdırıyoruz */
	printf("Fark: %d \n",cikar); /* Çıkarma işleminin sonucunu ekrana yazdırıyoruz */
	printf("Carpim : %d \n",carpim); /* Çarpma işleminin sonucunu ekrana yazdırıyoruz */
	printf("Bolum : %.f",bolme);  /* Bölme işleminin sonucunu ekrana yazdırıyoruz */
	 
	return 0 ; /* int main kullandığımız için sonuna return komutunu kullanıyoruz  */
 }