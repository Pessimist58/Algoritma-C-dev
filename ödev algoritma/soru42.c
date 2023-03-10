/* soru 42: Kullanıcının gireceği 5 sayıyı kullanıcının istediği düzende sıralayıp ekrana listeleyen program */

#include <stdio.h>
 
int main()
{
 	int sayilar[5]; /* Deger tanımlıyoruz */ 
 	int n = 0, buyuk = 0, kucuk = 0, temp = 0; /* Deger tanımlıyoruz */ 
 	char devammi,siralama; /* Deger tanımlıyoruz */ 
 	
   for(n=0 ; n < 5; n++) /* 5 kadar döngüye alıyoruz*/
   {
    printf(" %d. sayiyi giriniz : ",n+1);  /* Ekrana Yazdırma komutudur */ 
    scanf("%d",&sayilar[n]); /* Klavyeden girilen sayi değerlerini alıyoruz */
    fflush(stdin); /* düzenli çalışmasını sağlar */
   }
 
   printf("\n Siralama Duzeni\n (D-Duz | T-Ters) : "); /* Ekrana Yazdırma komutudur */ 
   scanf("%c",&siralama); /* Klavyeden girilen harf yani siralama değerlerini alıyoruz */
   fflush(stdin); /* düzenli çalışmasını sağlar */
 
   printf("\n\n 5 sayının kullanıcı istedigi sıralama"); /* Ekrana Yazdırma komutudur */ 
 
   for(n=0 ; n < 5; n++) 
   {
    printf(" %d -> ",sayilar[n]); /* Ekrana Yazdırma komutudur */ 
   }
 
   if( siralama == 'D' || siralama == 'd' )
   {
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
  }
  else if( siralama == 'T' || siralama == 't' )
  {
   for( buyuk=0; buyuk<4 ; buyuk++)
   {
    for( kucuk = buyuk+1; kucuk<5; kucuk++)
    {
     if( sayilar[buyuk] < sayilar[kucuk] )
     {
      temp = sayilar[buyuk];
      sayilar[buyuk] = sayilar[kucuk];
      sayilar[kucuk] = temp;
     }
    }
   }
  }
  else
  {
   printf("\n Hatali siralama duzeni girdiniz..."); /* Ekrana Yazdırma komutudur */ 
  }
 
  printf("\n\n 5 sayının Siralama Sonrasi"); /* Ekrana Yazdırma komutudur */ 
 
 
  	for(n=0 ; n < 5; n++)
  	{
  	 printf(" %d -> ",sayilar[n]); /* Ekrana Yazdırma komutudur */ 
  	}
 return 0 ;
 }

