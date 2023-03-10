/* soru 3: Kullanıcıdan iki sayı girmesini isteyen ve bu iki sayının toplamlarını ekrana yazdıran program */

#include <stdio.h>
main()


{

	int sayi1 ,sayi2 ,toplam; /* intle değer tanımlarız */
	 
	printf("Birinci Sayıyı Lütfen Giriniz: "); /* ekrana yazdırma komutudur */
	scanf("%d", &sayi1); /* sayı değeri alma komutudur */
	
	printf("İkinci Sayıyı Lütfen Giriniz: "); /* ekrana yazdırma komutudur */
	scanf("%d", &sayi2); /* sayı değeri alma komutudur */
	
	toplam = sayi1+sayi2 ; /* burda iki aldığımız sayıyı topluyoruz */
	
	printf("İki Sayının Toplamı: %d ", toplam); /* burda topladığımız sayıyı ekrana yazdırıyoruz */
	
}