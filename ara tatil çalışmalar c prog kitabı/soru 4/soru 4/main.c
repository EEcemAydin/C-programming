//
//  main.c
//  soru 4
//
//  Created by Ecem Aydın on 1.02.2023.
// c prog soru 11.9

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void gunuBul(int ortalama)
{
    int i;
    float fark;
    for (i=0; i<30; i++)
    {
        fark=abs(ortalama-i);
    }
    for (i=0; i<30; i++)
    {
        if(i>fark)
        {
            printf("altın degeri ortalama degerden en çok ayın %d. gününde farklılık göstermiştir.",i);
        }
    }
}
int main()
{
    float altıntl;
    printf("altının son otuz günlük degeri giriniz:\n");
    int i;
    int dizi[30];
    for (i=0; i<30; i++)
    {
        scanf("%d",&dizi[i]);
    }
    float ortalama;
    float toplam;
    for (i=0; i<30; i++)
    {
        toplam= toplam+dizi[i];
        ortalama=toplam/30;
    }
    printf("ortalama deger:%f",ortalama);
    gunuBul(ortalama);
    return 0;
}
