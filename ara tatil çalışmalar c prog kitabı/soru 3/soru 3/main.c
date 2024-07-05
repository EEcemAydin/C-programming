//
//  main.c
//  soru 3
//
//  Created by Ecem Aydın on 28.01.2023.
//

#include <stdio.h>

int main()
{
    int dizi[10];
    printf("lutfen 10 adet sayi giriniz\n");
    int i;
    for (i=0; i<10; i++)
    {
        scanf("%d",&dizi[i]);
    }
    float ortalama;
    float toplam;
    for (i=0; i<10; i++)
    {
        toplam = toplam+dizi[i];
        ortalama= toplam/10;
    }
    printf("sayiların ortalaması:\n");
    printf("%f",ortalama);
    printf("\n");
    printf("küçük olan elemanlar\n");
    
    for (i=0; i<10; i++)
    {
        if(dizi[i]<=ortalama)
        {
            printf("%d",dizi[i]);
        }
    }
    return 0;
}
