/* soru 28: Girilen iki sayı arasında bulunan asal sayıları listeleyen program */

#include <stdio.h>

main()
{
	int sayi1,sayi2,sayac; /* Deger tanımlıyoruz */ 
    printf("iki adet sayi giriniz :"); /* Ekrana Yazdırma komutudur */
    scanf("%d %d",&sayi1,&sayi2); /* sayi1 ve sayi2 değerini alıyoruz klavyeden girilen */

    printf("%d ve %d sayilari arasindaki asal sayilar \n",sayi1,sayi2); /* Ekrana Yazdırma komutudur */

    for (int i=sayi1 ; i<=sayi2 ; i++) /* for döngüsü */
	{
        sayac=0;
        
        for(int k=2 ; k<i ; k++) /* for döngüsü */
		{
            if(i%k == 0) /* eğer i ve k modu 0 eşitse bir aşağıdakini değerlendiriyor */ 
			{
                sayac++;
            }
        }

        if(sayac == 0 && sayi1 != 0 && sayi1 != 1) /*eğer sayac eşitse sıfıra ve sayi1 0 eşit değilse ve sayi1 1 eşit değilse aşağıdakini değerlendir */    
        {
            printf("%d\n" ,i); /* Ekrana Yazdırma komutudur */
            }
    }
}
