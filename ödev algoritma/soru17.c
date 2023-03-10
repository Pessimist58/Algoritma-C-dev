/* soru 17: Girilen bir yaşa karşılık gelen hayat dilimini ekrana yazan program */

#include <stdio.h>

main()
{
      int yas; /* Deger tanımlıyoruz */ 
      
	  printf("Lütfen yaşınızı giriniz : "); /* Ekrana Yazdırma komutudur */ 
      scanf("%d",&yas); /* Yaş Degerini Alıyoruz */
	

      if( yas >= 1 && yas <= 4) /* Eğer komutunu kullanıyoruz eğer yas 1 büyükveya eşitse  veya 4  küçükveya eşitse bir alttaki değerin koşulunu sağlıyor */ 
            printf("Bebeklik Dönemi"); /* Ekrana Yazdırma komutudur */ 
      else if( yas > 4 && yas <= 14 ) /* Eğer komutunu kullanıyoruz eğer yas 4 büyük  veya 14  küçükveya eşitse bir alttaki değerin koşulunu sağlıyor */
            printf("İlkögretim Dönemi"); /* Ekrana Yazdırma komutudur */ 
      else if( yas > 14 && yas <= 21 ) /* Eğer komutunu kullanıyoruz eğer yas 14 büyük  veya 21  küçükveya eşitse bir alttaki değerin koşulunu sağlıyor */
            printf("Yüksek Ögretim Dönemi"); /* Ekrana Yazdırma komutudur */ 
      else if( yas > 21 && yas <= 60 ) /* Eğer komutunu kullanıyoruz eğer yas 21 büyük  veya 60  küçükveya eşitse bir alttaki değerin koşulunu sağlıyor */
            printf("İş Hayatı "); /* Ekrana Yazdırma komutudur */ 
      else if( yas > 60 ) /* Eğer komutunu kullanıyoruz eğer yas 60 büyükse bir alttaki değerin koşulunu sağlıyor */
            printf("Emeklilik Dönemi"); /* Ekrana Yazdırma komutudur */ 
      else 
            printf("Geçersiz Yaş"); /* Ekrana Yazdırma komutudur */ 

}