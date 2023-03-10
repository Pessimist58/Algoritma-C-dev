/* soru 14: Girilen Bir not1a kar??l?k gelen durumu yazd?ran program */

#include <stdio.h>

int main()
{
	int not1 ;  /* De?er tan?ml?yoruz */ 

	printf("Bir not Giriniz"); /* Ekrana Yazd?rma komutudur */ 
	scanf(" %d", &not1); /* Not De?erini Al?yoruz */

	if (not1 >= 87) /* E?er not 87 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d AA Ge?tiniz ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	else if (not1 >= 81) /* E?er not 81 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d BA Ge?tiniz ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	else if (not1 >= 74) /* E?er not 74 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d BB Ge?tiniz ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	else if (not1 >= 67) /* E?er not 67 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d CB Ge?tiniz ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	else if (not1 >= 60) /* E?er not 60 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d CC Ge?tiniz ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	else if (not1 >= 53) /* E?er not 53 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d DC Ge?tiniz ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	else if (not1 >= 46) /* E?er not 46 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d DD Kald?n?z ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	else if (not1 >= 39) /* E?er not 39 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d FD Kald?n?z ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	else if (not1 >= 0) /* E?er not 0 b?y?k veya e?itse alttaki ekrana yazma komutunu yazd?r?r */ 
	{
		printf("notunuz %d FF Kald?n?z ", not1); /* Ekrana Yazd?rma komutudur */ 
	}
	return 0;
}

