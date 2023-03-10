/* soru 29: * karakteri ile piramit oluşturan program */

#include <stdio.h>

main()
{
    int i, bosluk, satir, k=0; /* Deger tanımlıyoruz */ 

    printf("Satır sayısını girin: "); /* Ekrana Yazdırma komutudur */
    scanf("%d",&satir); /* satir sayısını alıyoruz klavyeden girilen */
	printf("\n"); /* Ekrana Yazdırma komutudur */
	
    for(i=1; i<=satir; ++i, k=0)  /*1 döngüsüyle girilen satır kadar değerlendiriyoruz */
    {
        for(bosluk=1; bosluk<=satir-i; ++bosluk) /* döngüyle girelen satır kadar boşluk bırakıyor */
        {
            printf("  "); /* Ekrana Yazdırma komutudur */
        }

        while(k != 2*i-1)
        {
            printf("* "); /* Ekrana Yazdırma komutudur */
            ++k;
        }

        printf("\n"); /* Ekrana Yazdırma komutudur */
    }
    
}