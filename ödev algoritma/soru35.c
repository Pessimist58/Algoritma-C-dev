/* soru 35: Girilen bir sayı asal sayı ise, bundan sonraki 10 asal sayıyı da listeleyen program */

#include <stdio.h>
#include <conio.h>  /* Ekran klavye ve renk ayarlarıyla ilgili işlem yapan fonksiyonların tipini barındıran kütüphanedir. */
 
main()
{
 	int sayi = 0, i = 0 ,sayac = 0;  /* Deger tanımlıyoruz */ 
 	char asal = 'E';  /* Deger tanımlıyoruz */ 
  
	printf("Lutfen bir sayi giriniz: "); /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&sayi);  /* Klavyeden girilen sayı değeri alıyoruz */
 	fflush(stdin);
 
 	for(i=2; i<sayi; i++) /* girilen sayıyı döngüye alır */
 	{
  	if( sayi % i == 0 ) /*eğer girilen sayının modu 0 eşitse aşağıdakini değerlendirir */
  	{
  		asal = 'H';
 	 }
 	}
 
 	if( asal == 'E' ) /*eğer asal e eşitse aşağıdakini değerlendirir */
 	{
 	printf("\n%d asal sayisindan sonraki ",sayi); /* Ekrana Yazdırma komutudur */ 
 	printf("10 asal sayi :\n\n"); /* Ekrana Yazdırma komutudur */ 
  	sayi= sayi + 1;
 
  	while(sayac < 10)
  	{
   	asal = 'E';
 
   	for(i=2; i<sayi; i++)
   	{
    	if( sayi % i == 0 )
    	{
    	 asal = 'H';
   	 }
   	}
   	if(asal == 'E' )  /*eğer asal e eşitse aşağıdakini değerlendirir */
  	 {
    	printf("%d \n",sayi); /* Ekrana Yazdırma komutudur */ 
   	 sayac++;
  	 }
 
   	sayi++;
  	}
 	}
 	else
  	printf("\n%d asal sayi degildir.",sayi); /* Ekrana Yazdırma komutudur */ 
 
}