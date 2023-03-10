/* soru 33: Girilen bir sayıdaki rakamların toplamını bulan program */

#include <stdio.h>
 
main()
{
    int sayi,toplam = 0; /* Deger tanımlıyoruz */ 
     
    printf("Sayi giriniz: ");  /* Ekrana Yazdırma komutudur */
    scanf("%d",&sayi); /* Klavyeden girilen sayı değeri alıyoruz */
     
    while(sayi > 0)
	{
        toplam +=  sayi % 10;
        sayi = sayi / 10; 
    }
    printf("Girilen sayinin rakamlarinin toplami  %d dir.",toplam);  /* Ekrana Yazdırma komutudur */
}
