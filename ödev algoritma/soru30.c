/* soru 30: sayı piramidi oluşturan program */

#include <stdio.h>

main()
{
    int i, bosluk, satir, k=0, sayi1 = 0, sayi2 = 0; /* Deger tanımlıyoruz */ 

    printf("Satır sayısını girin: "); /* Ekrana Yazdırma komutudur */
    scanf("%d",&satir); /* Klavyeden girilen satir değeri alıyoruz */

    for(i=1; i<=satir; ++i)
    {
        for(bosluk=1; bosluk <= satir-i; ++bosluk)
        {
            printf("  "); /* Ekrana Yazdırma komutudur */
            ++sayi1;
        }

        while(k != 2*i-1)
        {
            if (sayi1 <= satir-1)
            {
                printf("%d ", i+k); /* Ekrana Yazdırma komutudur */
                ++sayi1; /* sayi1 bir arttırıyoruz */
            }
            else
            {
                ++sayi2; /* sayi2 bir arttırıyoruz */
                printf("%d ", (i+k-2*sayi2)); /* Ekrana Yazdırma komutudur */
            }
            ++k;
        }
        sayi2 = sayi1 = k = 0;

        printf("\n"); /* Ekrana Yazdırma komutudur */
    }
    
}