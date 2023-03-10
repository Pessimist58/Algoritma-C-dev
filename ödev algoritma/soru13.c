/* soru 13: Girilen yılın artık yıl olup olmadığını tespit eden program*/

#include <stdio.h>
main()

{ 
	int yil ; /* Değer tanımlıyoruz */ 
	printf("Bir Yıl Giriniz: ");  /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&yil); /* Yaş Değerini Alıyoruz */
	
	if(yil%4 == 0) /* Eğer komutunu kullanıyoruz eğer yil 0 eşitse bir alttaki eğerin koşulunu sağlıyor */ 
	{
		if(yil%100 == 0) /*Eğer yil 100 eşitse bir alttaki eğerin koşulunu sağlıyor */ 
		{
		
		if(yil%400 == 0) /*Eğer yil 400 eşitse bir alttaki eğerin koşulunu sağlıyor */ 
			printf("%d Artık Yıldır ",yil); /* Ekrana Yazdırma komutudur */
			else 
			printf("%d Artık Yıl Değildir ", yil);	/* Ekrana Yazdırma komutudur */	
		}
	else printf("%d Artık yıldır",yil); /* Ekrana Yazdırma komutudur */
	}
	else printf ("%d Artık yıl Değildir",yil); /* Ekrana Yazdırma komutudur */

}
