/* soru 20: Bir üçgenin girilen üç kenarına göre üçgen türünü bulan program */

#include <stdio.h>
 
main()
{
 	int kenar1 = 0, kenar2 = 0, kenar3 = 0; /* Deger tanımlıyoruz */ 
 
 	printf("Birinci Kenarı giriniz : "); /* Ekrana Yazdırma komutudur */
 	scanf("%d",&kenar1); /* Birinci Kernar Degerini Alıyoruz */

 
 	printf("\nİkinci Kenarı giriniz : "); /* Ekrana Yazdırma komutudur */
 	scanf("%d",&kenar2);/* İkinci Kenar Degerini Alıyoruz */
 	
 	printf("\nÜçüncü Kenarı giriniz: "); /* Ekrana Yazdırma komutudur */
 	scanf("%d",&kenar3); /* Üçüncü Kenarı Degerini Alıyoruz */
 
 	if( (kenar1 == kenar2 ) && ( kenar2 == kenar3) ) /* Birinci Kenar ve İkinci Kenar eşitse ve ikinici kenar ve üçüncü kenar eşitşe bir alttaki koşulu değerlendirir */
 	{
 	 printf("\nTüm kenarlar eşit. "); /* Ekrana Yazdırma komutudur */
 	 printf("\nBu bir eşkenar üçgendir."); /* Ekrana Yazdırma komutudur */
	 }
	 else if( (kenar1 == kenar2 ) || (kenar2 == kenar3) || (kenar1 == kenar3) ) /* Birinci Kenar ve İkinci Kenar eşitse veya ikinici kenar ve üçüncü kenar eşitşe veya birinci kenar ve üçüncü kenar eşitse bir alttaki koşulu değerlendirir */
	 {
 	 printf("\nİki Kenar eşit."); /* Ekrana Yazdırma komutudur */
 	 printf("\nBu bir ikizkenar ücgendir."); /* Ekrana Yazdırma komutudur */
 	}
 	else /* eğer değilse */
 	{
 	printf("\nKenarlar eşit değildir."); /* Ekrana Yazdırma komutudur */
  	printf("\n Karışık bir ücgendir."); /* Ekrana Yazdırma komutudur */
 	} 
 
}