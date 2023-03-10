/* soru 24: 1’den 50’ye kadar olan tüm doğal sayıları, tek ve çift sayıları ayrı ayrı yazdıran program */


main()
{
	int i = 0; /* Deger tanımlıyoruz */ 
 
	printf("\n 1'den 50'ye Tüm Dogal Sayılar");  /* Ekrana Yazdırma komutudur */
	printf("\n");  /* Ekrana Yazdırma komutudur */
 for(i = 1; i <= 50; i=i+1)  /* 1 den 50 kadar  tüm doğal sayılar döngüsü */
 {
  printf("\t %d",i);  /* Ekrana Yazdırma komutudur */
 }
	printf("\n"); /* Ekrana Yazdırma komutudur */
	printf("\n 1'den 50'ye Tek Sayılar");  /* Ekrana Yazdırma komutudur */
	printf("\n"); /* Ekrana Yazdırma komutudur */
 
 for(i = 1; i <= 50; i=i+2) /* 1 den 50 kadar  tüm tek sayılar döngüsü */
 {
  printf("\t %d",i);  /* Ekrana Yazdırma komutudur */
 }
 
	printf("\n");  /* Ekrana Yazdırma komutudur */
	printf("\n 1'den 50'ye Çift Sayılar");  /* Ekrana Yazdırma komutudur */
	printf("\n");  /* Ekrana Yazdırma komutudur */
 for(i = 0; i <= 50; i=i+2) /* 1 den 50 kadar  tüm çift sayılar döngüsü */
 {
  printf("\t %d",i);  /* Ekrana Yazdırma komutudur */
 }
 
}