#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct araba
    {
        char isim[20];
        char model[20];
        int model_yili;
        int kasa_tipi;
        float fiyat;
    };
    int araba_say;
    printf("araba sayısı giriniz:");
    scanf("%d",&araba_say);
    struct araba veri[araba_say];
    int i;
    for ( i = 0; i < araba_say; i++)
    {
        printf("----------------------------------\n");
       printf("%d. arabanın markasını giriniz:",i+1);
       scanf("%s",veri[i].isim);  
       printf("%d. arabanın model giriniz:",i+1);
       scanf("%s",veri[i].model);
       printf("%d. arabanın model yılı giriniz:",i+1);
       scanf("%d",&veri[i].model_yili);
       printf("%d. arabanın kasa tipi(1,2,3) giriniz:",i+1);
       scanf("%d",&veri[i].kasa_tipi);
       printf("%d. arabanın fiyatini giriniz:",i+1);
       scanf("%f",&veri[i].fiyat);
    }
    
    printf("--------HATCHBACK--------\n");
    for ( i = 0; i < araba_say; i++)
    {
       if(veri[i].kasa_tipi==1)
       {
        printf("%7s %6s %4d %.2f\n",veri[i].isim,veri[i].model,veri[i].model_yili,veri[i].fiyat);
       }
    }
    printf("---------SEDAN-----------\n");
    for ( i = 0; i < araba_say; i++)
    {
       if(veri[i].kasa_tipi==2)
       {
        printf("%7s %6s %4d %.2f\n",veri[i].isim,veri[i].model,veri[i].model_yili,veri[i].fiyat);
       }
    }
    printf("-------STATİON VAGON-------\n");
    for ( i = 0; i < araba_say; i++)
    {
       if(veri[i].kasa_tipi==3)
       {
        printf("%7s %6s %4d %.2f",veri[i].isim,veri[i].model,veri[i].model_yili,veri[i].fiyat);
       }
    }

    
    return 0;
}