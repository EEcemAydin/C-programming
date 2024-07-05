//
//  main.c
//  çalışma 24
//
//  Created by Ecem Aydın on 26.01.2023.
// CAN BOZ 7.BÖLÜM SORU 153

#include <stdio.h>

int main()
{
    int i;
    int dizi[10];
    int max,min;
    printf("dizinin elemanlarını giriniz:\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&dizi[i]);
    }
    min=max=dizi[0];
    for (i=0; i<10; i++)
    {
        if(dizi[i]>max)
        {
            max=dizi[i];
        }
        if(dizi[i]<min)
        {
            min=dizi[i];
        }
    }
    
    printf("maksimum deger %d\n",max);
    printf("minimum deger %d\n",min);
    
    
    
    return 0;
}
