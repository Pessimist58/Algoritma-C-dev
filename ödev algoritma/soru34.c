/* soru 34: Girilen bir sayının "mükemmel sayi" olup olmadığını bulan program */

#include <stdio.h>

main()
{
	int sayi , toplam = 0; /* Deger tanımlıyoruz */ 
	printf("Lutfen Sayi giriniz");  /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&sayi); /* Klavyeden girilen sayı değeri alıyoruz */
	
	for (int i = 1; i <sayi; i ++) 
	{ 
   	if (sayi% i == 0) /* eğer sayı modu 0 eşitse aşağıdakini değerlendir */
   	{ 
    	 toplam = toplam + i;  /* toplamla i yi topluyoruz*/ 
  	 } 
	}
	if (toplam == sayi)  /* eğer toplamı sayiya eşitse aşağıdakini değerlendirir */
	{ 
  	 printf("%d sayi Mukemmel Sayidir",sayi); /* Ekrana Yazdırma komutudur */
	}
	else /* değilse aşağıdakini değerlendir */
	{ 
 	  printf("%d sayi Mukemmel Sayi Degildir",sayi); /* Ekrana Yazdırma komutudur */
	} 
}
	
