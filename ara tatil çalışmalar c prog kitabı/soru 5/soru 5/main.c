//
//  main.c
//  soru 5
//
//  Created by Ecem Aydın on 2.02.2023.
// marmara üni vize soruları

#include <stdio.h>

int main()
{
    int ilkdizieleman;
    int ikincidizieleman;
    int dizi1_artis;
    int dizi2_artis;
    printf("ilk dizinin ilk elemanını ve artis miktarını giriniz:\n");
    scanf("%d%d",&ilkdizieleman,&dizi1_artis);
    printf("ikinci dizinin ilk elemanı ve artis miktarını giriniz:\n");
    scanf("%d%d",&ikincidizieleman,&dizi2_artis);
    
    int dizi[100];
    int i;
    for (i=0; i<=100; i+=dizi1_artis)
    {
        dizi[i]=i;
    }
    
    printf("ortak değerler");
    
    for (i=0; i<=100; i+=dizi2_artis)
    {
        if(dizi[i]=i && dizi[i]!=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
