/* soru 10: Kullanıcıdan iki sayı girmesini isteyen ve sayıların büyüklüğümü karşılaştıran program */
 
#include <stdio.h>
main()

{
	int say1,say2; /* Değer tanımlıyoruz */ 
	
	printf("Birinci Sayı giriniz :"); /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&say1); /* Birinci girilen sayının değerini alıyoruz */ 
	
	printf("ikinci Sayı giriniz :"); /* Ekrana Yazdırma komutudur */ 
	scanf("%d",&say2);  /* İkinci girilen sayının değerini alıyoruz */ 
	
	if(say1>say2) /* sayımızın hangisi büyük olduğunu anlamak için if kullanıyoruz */ 
	{
		printf("%d > %d Birinci Sayı Büyüktür.",say1,say2);  /* Ekrana Yazdırma komutudur */ 
	}
	else if(say2>say1) /* sayımızın hangisi büyük olduğunu anlamak için if değer kullanıyoruz */ 
	{
		printf("%d > %d İkinci Sayı Büyüktür",say2,say1); /* Ekrana Yazdırma komutudur */ 
	}
}