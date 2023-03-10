/* soru 22: Girilen bir sayının ASAL Sayı olup olmadığını bulan program */

#include <stdio.h> 

 main() 
{

       int sayi, i , n = 0 ;  /* Deger tanımlıyoruz */ 
 
       printf("Bir sayi giriniz:");  /* Ekrana Yazdırma komutudur */
       scanf("%d", &sayi);   /* sayi Degerini Alıyoruz */
       
       for( i = 2; i <= sayi/2; i++) /* döngü i eşitse ikiye i küçükeşitse sayi böl ikiye i bir arttır */
	   { 
         if(sayi % i == 0) /* eğer sayi i'ye tam bölünüyorsa */
		  { 
           n = 1; /* Deger tanımlıyoruz */ 
           break; 
         }
       } 
       if(n == 0) /* eğer n eşitse 0 ise aşağıdaki koşulu değerlendirir */
          printf("Sayi Asaldir\n"); /* Ekrana Yazdırma komutudur */
       else /* Değilse */
          printf("Sayi Asal Degildir\n"); /* Ekrana Yazdırma komutudur */
}