/* soru 12: Yaşı Girilen bir kişinin seçimlerde oy verme yeterliliği olup olmadığını test eden program */

#include <stdio.h>
main()

{
	int yas; /* Değer tanımlıyoruz */ 
	
	printf("Lütfen Yaşınızı Giriiniz:"); /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&yas); /* Yaş Değerini Alıyoruz */ 
	
	if(yas>=18) /* Eğer komutunu kullanıyoruz eğer 18 eşit veya büyükse oy kullanabilir eğer değilse kullanamaz */ 
	{
		printf("Oy Kullanabilirsiniz"); /* Ekrana Yazdırma komutudur */ 
		
	}
	
	else /* değilse */
	{
		printf("Oy Kullanamazsınız"); /* Ekrana Yazdırma komutudur */ 
	}
	

}