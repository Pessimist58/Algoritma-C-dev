/* soru 50: Girilen iki kelimeden hangisinin uzun olduğunu bulan program */

#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
    int sonuc;
    char kelime1[100];  /* Deger tanımlıyoruz */ 
    char kelime2[100]; /* Deger tanımlıyoruz */ 

    printf("Birinci kelimeyi giriniz lutfen:"); /* Ekrana Yazdırma komutudur */
	gets(kelime1); /* girilen birinci kelimeyi alıyoruz */
    printf("Ikinci kelimeyi giriniz lutfen: "); /* Ekrana Yazdırma komutudur */
	gets(kelime2); /* girilen ikinci kelimeyi alıyoruz */

    sonuc = strcmp(kelime1,kelime2); /* iki kelimeyi karşılaştırıyoruz */

    if(sonuc == 0){ /* eğer iki kelime arasında fark yoksa */
        printf("Girilen iki kelimenin de uzunluklari ayni.");
    }
    else{
        if(sonuc>1){ /* eger birinci kelimenin sayisi ikinciden uzun ise */
            printf("%s kelimesi &s kelimesinden daha uzundur.",kelime1, kelime2); /* Ekrana Yazdırma komutudur */
        }
        else{ /* eger birinci kelimenin sayisi ikinciden kisa ise*/
            if(sonuc < 1){
                printf("%s kelimesi %s kelimesinden daha uzundur.",kelime2, kelime1); /* Ekrana Yazdırma komutudur */
            }
        }
    }

}
