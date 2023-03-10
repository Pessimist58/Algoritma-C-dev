/* soru 57: Kullanıcı tarafından girilen bir metni büyük harflere ceviren program */


#include<stdio.h>
#include <string.h> /*metin almak için yazı olarak string kütüphanesini kullanıyoruz */ 

main()
 {
    char string[100]; /* Deger tanımlıyoruz */ 
    
    printf("Bir metin giriniz: "); /* Ekrana Yazdırma komutudur */
    gets(string); /* girilen metni alıyoruz */
    
    printf("metininiz buyuk harflere cevirirdi: %s",strupr(string)); /* Ekrana Yazdırma komutudur  ayriyetten  strupr bir dizindeki harfleri büyük harfe çevirir. */
    
 }