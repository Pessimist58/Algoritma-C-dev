/* soru 4: Bir Kenarı girilen karenin alanı ve çevresini hesaplayan program */

#include <stdio.h>

main()

{
	int  kenar , cevre, alan ;  /* burada değerleri tanımlıyoruz */
	
	printf("Karenin Kenar Uzunluğunu giriniz"); /* ekrana yazdırma komutudur */
	scanf("%d", &kenar); /* girilen değeri alma komutudur */
	
	cevre = kenar*4; /* burada karenin cevresini hesaplanıyor */
	
	alan = kenar*kenar;  /* burada karenin alanın hesaplanıyor*/
	
	printf("Karenin Cevresi %d Karenin Alanı %d",cevre, alan); /* burada karenin cevresi ve alanı ekrana yazdırıyoruz */
	 
}