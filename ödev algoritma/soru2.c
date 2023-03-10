/* soru 2: Bir sayı girilmesini isteyen ve girilen sayıyı ekrana yazan program */

#include <stdio.h>

main()

{
	int sayi; /* intle değer tanımlarız */
	printf("Bır Sayı Gırınız"); /* ekrana yazdırma komutudur. */
	scanf("%d", &sayi); /* burda girdiğimiz sayıyı almak için int değeri kullandığımız için %d alıp ampersand işaretiyle sayımızın değerini alıyoruz*/
	
	printf("Gırdıgıniz Sayı %d", sayi); /* aldığımız değeri burda yine int kullandığımız için %d alıp virgül işaretiyle değerimizin ismini yazarak ekrana yazdırıyoruz. dikkat ettiyseniz burda ampersand kullanmadık çünkü herhangi bir sayı değerini almadık ekrana yazdırdık sadece */
}