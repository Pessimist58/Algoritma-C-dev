/* soru 5: İki kenarı girilen dikdörtgenin alanı ve çevresini bulan program */

#include <stdio.h>

main()

{
	int kisakenar,uzunkenar, alani, cevre ; /* intle değer tanıtırız */
	
	printf("Dikdörtgenin Kısa Kenarını Giriniz: "); /* Ekrana yazdırma komutudur */
	scanf("%d", &kisakenar); /* sayı değerini alırız burada */ 
	
	printf("Dikdörtgenin Uzun Kenarını Giriniz: "); /* Ekrana yazdırma komutudur */
	scanf("%d", &uzunkenar); /* sayı değerini alırız burada */ 
	
	cevre = 2*(kisakenar+uzunkenar); /* Dikdörtgen cevresini hesaplanır */
	alani = kisakenar*uzunkenar ; /* Dikdörtgen alanını hesaplanır */
	
	printf("Dikdörtgen Cevresi: %d \n Dikgörtgen Alanı %d :", cevre ,alani); /* Ekrana yazdırma komutudur */
	
}