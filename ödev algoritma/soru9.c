/* soru 9: Girilen bir sayının tek veya çift sayı olduğunu bulan program */

#include <stdio.h>

main()
{
	int sayi,cift; /* değer atıyoruz */
	
	printf("Lütfen Bir Sayı Giriniz :"); /* ekrana yazdırıyoruz */
	scanf("%d", &sayi);  /* girilen değeri alıyoruz  */
	
	cift= sayi%2; /* sayımız çift olup olmadığını anlamak için burda modunu alıyoruz ve sonucu 0 ise çift oluyordur */
	
	if (cift==0) /* eğer komutunu kullanıyoruz eğer sayımız 0 eşitse çiftdir değilse tektir */ 
	{
		printf("%d Sayınız Çiftdir",sayi);  /*  çiftse ekrana yazdırıyoruz */
		
	}
	else /*değilse  */
	{
		printf("%d Sayınız Tektir",sayi); /* tekse ekrana yazdırıyoruz */
	}
	
}