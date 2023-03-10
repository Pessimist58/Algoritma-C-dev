/* soru 40: Bir dizi içerisinde verilen sayılar arasından aranan bir sayıyı bulan program */

#include <stdio.h>

int main()
{
 	int sayilar[30] = {1,3,6,12,16,18,17,32,43,25,42,76,90,54,56,58,34,54,63,72}; /* Deger tanımlıyoruz */ 
 	int aranan = 0, sayisira = 0, sayac = 0; /* Deger tanımlıyoruz */ 
	char bulundu = 'Y'; /* Deger tanımlıyoruz */ 
 
 	printf("Dizi icerisinde aranacak sayi : ");  /* Ekrana Yazdırma komutudur */ 
 	scanf("%d",&aranan); /* Klavyeden girilen aranan değeri alıyoruz */
 
	 for( sayac= 0; sayac < 30; sayac++ ) /* 30 kadar döngüye alır*/
		 {
  		if( sayilar[sayac] == aranan )
 		{
 		  bulundu = 'E'; 
  		 sayisira = sayac + 1;
  		 break;
  		}
		 }
 
 		if(bulundu == 'E' )  /* eğer bulundu E eşitse alttakini yazdırır */ 
 		 printf("\n%d sayisi listenin %d. sirasinda.",aranan,sayisira);  /* Ekrana Yazdırma komutudur */ 
 		else /* değilse alttakini yazdırır */
 		 printf("\n%d sayisi gecerli degil.",aranan);  /* Ekrana Yazdırma komutudur */ 
 
 return 0 ;
}