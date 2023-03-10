/* soru 8: Kullanıcıdan yaşını sorarak ay, hafta, gun,saat,dakika ve saniye olarak hesaplayan program. */

#include <stdio.h>

main()

{
	int yas,ay,hafta,gun,saat,dakika,saniye ; /* Burada değer tanımlıyoruz*/
	
	printf("Lütfen Yasınızı Giriniz :"); /* Ekrana yazdırma komutu printf */
	scanf("%d", &yas); /* Girilen değeri alıyoruz */
	
	ay = yas*12; /* ay hesaplıyoruz */
	hafta= yas*52; /* haftayı hesaplıyoruz */
	gun= yas*365; /* gun hesaplıyoruz */
	saat = yas*365*24; /* saat hesaplıyoruz */
	dakika = yas*365*24*60; /* dakikayı hesaplıyoruz */
	saniye = yas*365*24*60*60; /* saniyeyi hesaplıyoruz */
	
	printf("yaşınıza göre \nAy : %d \nhafta : %d \ngun : %d \nsaat : %d \ndakika : %d \nsaniye : %d  ",ay,hafta,gun,saat,dakika,saniye); /* en sonda aldığımız hesapladığımız tüm değerleri ekrana yazdırıyoruz */
	
	
	
}