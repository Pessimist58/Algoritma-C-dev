/* soru 26: Girilen bir sayının faktöriyelini hesaplayan program */

#include <stdio.h>

main()
{
	int sayi,i,faktoriyel= 1; /* Deger tanımlıyoruz */ 
	
	printf("Bir sayı giriniz:"); /* Ekrana Yazdırma komutudur */
	scanf("%d",&sayi); /* Klavyeden girilen değeri alıyoruz */
	
	for(int i = 1; i <= sayi; i++) /* girelen sayi knk döngüye alıyoruz */
    {
        faktoriyel = faktoriyel*i;     /* faktoriyel bulmak için faktoriyel çarpı alınan sayıya çarpıyoruz */                                 
    }
    printf("%d!= %d faktöriyedir",sayi, faktoriyel); /* Klavyeden girilen değeri alıyoruz */
}