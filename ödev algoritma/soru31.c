/* soru 31: Kullanıcı negatif bir sayı girinceye kadar kullanıcıdan bir sayı girmesini isteyen ve girilen sayıyı ekrana yazdıran program */

#include <stdio.h>
 
main()
{
 int sayi = 0; /* Deger tanımlıyoruz */ 
 
 while( sayi >= 0)
 {
  printf("\nSayı giriniz : "); /* Ekrana Yazdırma komutudur */
  scanf("%d",&sayi); /* Klavyeden girilen sayı değeri alıyoruz */
 
  printf("sayınız: %d bir sayı giriniz.",sayi); /* Ekrana Yazdırma komutudur */
 }
}		