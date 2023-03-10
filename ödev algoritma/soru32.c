/* soru 32: Kullanıcı istediği sürece tekrar çalıştırılan basit hesap makinası işlevi gören bir program yazınız */

#include <stdio.h>
#include <conio.h> /* Ekran klavye ve renk ayarlarıyla ilgili işlem yapan fonksiyonların tipini barındıran kütüphanedir. */
 
main()
{
 char devam= ' ';  /* Deger tanımlıyoruz */ 
 int sayi1=0, sayi2=0 ,sonuc=0;  /* Deger tanımlıyoruz */ 
 char islem = ' ';  /* Deger tanımlıyoruz */ 
 
 do 
 { 

 	 printf("birinci sayiyi giriniz : "); /* Ekrana Yazdırma komutudur */
  	scanf("%d",&sayi1); /* Klavyeden girilen birinci sayı değeri alıyoruz */
 	 fflush(stdin);

 	 printf("ikinci sayiyi giriniz : "); /* Ekrana Yazdırma komutudur */
  	scanf("%d",&sayi2); /* Klavyeden girilen ikinci sayı değeri alıyoruz */
	fflush(stdin);

 
 	printf("Yapilacak islemi seçiniz lutfen  ( + - / * ): "); /* Ekrana Yazdırma komutudur */
 	scanf("%c",&islem); /* Klavyeden islem değeri alıyoruz */
	fflush(stdin);

  if( islem == '+') /* eğer isleminiz + eşitse bir alttaki işlemi değerlendir */
  {
  	sonuc = sayi1 + sayi2; /* burada toplama işlemini yapıyoruz */
  }
  else if( islem == '-') /* eğer isleminiz - eşitse bir alttaki işlemi değerlendir */
  {
  	sonuc = sayi1 - sayi2; /* burada çıkarma işlemini yapıyoruz */
  }
  else if( islem == '*') /* eğer isleminiz * eşitse bir alttaki işlemi değerlendir */
  {
  	 sonuc = sayi1 * sayi2;	/* burada çarpma işlemini yapıyoruz */
  } 
  else if( islem == '/') /* eğer isleminiz / eşitse bir alttaki işlemi değerlendir */
  {
    sonuc = sayi1/sayi2; /* burada bölme işlemini yapıyoruz */
  }
  else
   printf("\n Gecerli bir islem belirtmediniz."); /* Ekrana Yazdırma komutudur */
 
 	 printf("\n\n %d %c %d = %d",sayi1,islem,sayi2,sonuc); /* Ekrana Yazdırma komutudur */
 
  	printf("\n\n Devam etmek istiyor musunuz ? (E/H): "); /* Ekrana Yazdırma komutudur */
   	scanf("%c",&devam); /* Klavyeden devam değeri alıyoruz */
     fflush(stdin);

 }
 while(devam == 'E' || devam == 'e'); /* eğer E veya e eşitse başar sarar program */
}