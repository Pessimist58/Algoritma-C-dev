/* soru 21: Kullanıcıya medeni halini,evli ise kaç çocuğu olduğunu soran ve gerekli mesajlı veren program */

#include <stdio.h>
 
main()
{
	char medenihali = ' '; /* Deger tanımlıyoruz */ 
	int cocuk; /* Deger tanımlıyoruz */ 
	
	printf("Evli misiniz? (Evliyseniz = 'E' Evli değilseniz = 'H' yazınız) : "); /* Ekrana Yazdırma komutudur */
	scanf("%c",&medenihali);  /* Medenihali Degerini Alıyoruz */

 if( medenihali == 'E' || medenihali == 'e' ) /* Eğer medenihali E eşitse veya e eşitse aşağıdaki koşulu değerlendirir */
 {
  printf("\n Kaç çocuğunuz var? : "); /* Ekrana Yazdırma komutudur */
  scanf("%d",&cocuk); /* Cocuk Degerini Alıyoruz */
 
  if( cocuk > 2) /* Eğer çocuk 2 den büyükse aşağıdaki koşulu değerlendirir */
  {
    printf("\nBüyük bir ailesiniz."); /* Ekrana Yazdırma komutudur */
  }
  else /* değilse koşulu değerlendirir */
  {
   printf("\nKüçük bir ailesiniz."); /* Ekrana Yazdırma komutudur */
  }
 }
 else if( medenihali == 'H' || medenihali == 'h' ) /* Eğer değilse medenihali H eşitse veya h eşitse aşağıdaki koşulu değerlendirir */
  printf("\nEvli değilseniz tüh :/"); /* Ekrana Yazdırma komutudur */
 else
  printf("\n Lütfen (E,e,H,h) harfleri hariç bir şey yazmayınız."); /* Ekrana Yazdırma komutudur */
 
}