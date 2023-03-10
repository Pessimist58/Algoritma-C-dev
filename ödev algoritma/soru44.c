/* soru 44: 3*3'lük bir matrisin değerlerini kullanıcıya soran ve matrisi ekrana yazdıran program */

#include <stdio.h>

main()
{
    int matrix[2][2], satir = 0, sutun = 0; /* Deger tanımlıyoruz */ 

    for (satir = 0; satir < 3; satir++)  /* satir icin for dongusu */
    {
        for (sutun = 0; sutun < 3; sutun++) /* sutun icin for dongusu */
        {
            printf("[%d][%d] numarali matrisi girin= ", satir + 1, sutun + 1); /* Ekrana Yazdırma komutudur */ 
            scanf("%d", &matrix[satir][sutun]); /* Klavyeden girilen değeri alıyoruz */
  
        }
    }
    for (satir = 0; satir < 3; satir++) /* satir icin for dongusu */
    {
        for (sutun = 0; sutun < 3; sutun++) /* sutun icin for dongusu */
        {
            printf("[ %d ] ", matrix[satir][sutun]); /* Ekrana Yazdırma komutudur */ 
        }
    }

}
