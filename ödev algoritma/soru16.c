/* soru 16: Haftanın gün numarasına karşılık gelen gün adını veren program */

#include <stdio.h>

main()

{
	int gun; /* Deger tanımlıyoruz */ 
	
	printf("1-7 arası bir sayı giriniz: "); /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&gun); /* harf Degerini Alıyoruz */
	
	switch(gun)  /* Sadece bir değişkenin durumuna bağlı olarak o değişkenin aldığı değere göre onu ele alır ve o koşulu karşılıyanı değerlendirir */
	{
		case 1 : printf("Pazartesi"); /* Ekrana Yazdırma komutudur */ 
		break;
		
		case 2 : printf("Salı"); /* Ekrana Yazdırma komutudur */ 
		break;
		
		case 3 : printf("Çarşamba"); /* Ekrana Yazdırma komutudur */ 
		break;
		
		case 4 : printf("Perşembe"); /* Ekrana Yazdırma komutudur */ 
		break;
			
		case 5 : printf("Cuma"); /* Ekrana Yazdırma komutudur */ 
		break;
		
		case 6 : printf("Cumartesi"); /* Ekrana Yazdırma komutudur */ 
		break;
		
		case 7 : printf("Pazar"); /* Ekrana Yazdırma komutudur */ 
		break;
		
		default:
			printf("Lütfen 1 - 7 arasında bir sayı giriniz!!!"); /* Ekrana Yazdırma komutudur */ 
		
	}
}
	


