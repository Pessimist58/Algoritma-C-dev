/* soru 7: Kullanıcıdan gidilecek mesafe ve varış zamanını sorarak olması gerekn hızı hesaplayan program */

#include <stdio.h>

main()

{
	float mesafe, zaman, hiz; /* değer tanıtıyoruz */
	
	printf("Gidilecek Mesafe Giriniz : "); /* ekrana yazdırma komutudur */
	scanf("%f", &mesafe); /* Girdiğimiz değeri alıyoruz float kullandığımız için %f olarak aldık*/
	
	printf("Varış Zamanını Giriniz : "); /* ekrana yazdırma komutudur */
	scanf("%f", &zaman); /* Girdiğimiz değeri alıyoruz float kullandığımız için %f olarak aldık*/
	
	hiz = mesafe/zaman; /* hızı bulmak için mesafe ve zamanı bölüyoruz */
	printf("Hızınız %f",hiz); /* hesapladığımız hızı ekrana yazdırıyoruz */
	
}

