/* soru 36: Kullanıcının vereceği sayıda öğrencinin puanlarını sorarak bu puanların toplamını ve ortalamasını bulan program*/

#include <stdio.h>
 
main()
{
 	int toplam, sayac, sayi, puan[50]; /* Deger tanımlıyoruz */ 
 
 	printf("%Kac Ogrencinin Notu girilecek? : ",sayi+1); /* Ekrana Yazdırma komutudur */ 
 	scanf("%d",&sayi);  /* Klavyeden girilen sayi değeri alıyoruz */

 
 	for(sayac=0 ; sayac <= sayi-1 ; sayac++ )
	 {
 	printf("%d. Ogrenicinin puani : ",sayac+1); /* Ekrana Yazdırma komutudur ve sayacı 1 arttırıyo */ 
  	scanf("%d",&puan[sayac]);  /* Klavyeden girilen paun değeri alıyoruz */
  
  	toplam = toplam + puan[sayac]; /* toplamı buluyoruz*/ 
 	}
  	float ort = (toplam /sayac) ; /* Deger tanımlayıp işlem yaptırıyoruz*/ 
  	
 	printf("\nOgrenci Sayisi = %d",sayac); /* Ekrana Yazdırma komutudur */ 
 	printf("\nPuan Toplami = %d",toplam); /* Ekrana Yazdırma komutudur */ 
 	printf("\nPuan Ortalamasi = %f\n",ort); /* Ekrana Yazdırma komutudur */ 
 
}