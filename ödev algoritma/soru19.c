/* soru 19: Basit dört işlem ve modüler aritmetik işlemi yapabilen program (switch ile) */


#include <stdio.h> 
 
main()
{
 	int sayi1, sayi2 , sonuc; /* Deger tanımlıyoruz */ 
	char islem ; /* Deger tanımlıyoruz */ 
	
	printf("Yapmak istediginiz islemi giriniz \nToplama için +\n2.Cikarma için -\n3.Carpma için *\n4.Bolme için /\nSeçiminiz : "); /* Ekrana Yazdırma komutudur */ 
	scanf("%c",&islem);  /* İşlem Degerini Alıyoruz */
	
	printf("Birinci sayıyı giriniz : "); /* Ekrana Yazdırma komutudur */ 
 	scanf("%d",&sayi1);  /* Birinci Sayı Degerini Alıyoruz */
 
	printf("İkinci sayıyı giriniz : "); /* Ekrana Yazdırma komutudur */ 
 	scanf("%d",&sayi2); /* İkinci Sayı Degerini Alıyoruz */
 
	
 	switch(islem) /* Sadece bir değişkenin durumuna bağlı olarak o değişkenin aldığı değere göre onu ele alır ve o koşulu karşılıyanı değerlendirir */
 	{
 	case '+' : printf("İki sayının toplamının sonucu %d ", sonuc = sayi1 + sayi2); /* Toplama işleminin sonucunu ekrana yazdırıyoruz */
  	break;
 	case '-' : printf("İki sayının Çıkarmanın sonucu %d ",sonuc = sayi1 - sayi2); /* Çıkarma işleminin sonucunu ekrana yazdırıyoruz */
  	break;
  	case  '*' : printf("İki sayının çarpımının sonucu %d ",sonuc = sayi1 * sayi2); /* Çarpma işleminin sonucunu ekrana yazdırıyoruz */
 	break;
 	case '/' : printf("İki sayının bölümünün sonucu %d ",sonuc = sayi1 / sayi2); /* Bölme işleminin sonucunu ekrana yazdırıyoruz */
 	break;
  
  	default: printf("\n Gecerli bir islem belirtmediniz."); /* Ekrana Yazdırma komutudur */ 
 }
 
	 
}