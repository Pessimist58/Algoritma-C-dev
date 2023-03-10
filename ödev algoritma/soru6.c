/* soru 6: Yarı Çapı girilen dairenin alanını ve çevresini bulan program */

#include <stdio.h>

main()

{
	int yaricap; /* burada intle değer tanıtıyoruz */ 
	float pi = 3.14, alani , cevre; /* burada floatla değer tanıtıyoruz */ 
	printf("Lütfen Dairenizin Yarı Çapını Giriniz: "); /* ekrana yazdırma komutudur */
	scanf("%d", &yaricap); /* burada yaricapımız int değerinde olduğumuz için %d alıyoruz eğer float olsaydı %f alıcaktık */
	
	cevre = 2*pi*yaricap; /* burada dairenin cevresini hesaplıyoruz */ 
	alani = pi*yaricap*yaricap;  /* burada dairenin alanını hesaplıyoruz */ 
	 
	printf("Daire cevresi %f,\n Daire Alanı %f ", cevre,alani);  /* burada hesapladıktan sonra ekrana yazdırıyoruz. %f kullandık çünkü floatla tanıttığımız için eğer intle değerimizi verseydik %d yazdırıcaktık. */ 
	
}