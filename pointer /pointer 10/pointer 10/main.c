//
//  main.c
//  pointer 10
//
//  Created by Ecem Aydın on 23.02.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int elemanvarmi(int *pntr,int uzunluk)
{
    int i;
    for (i=0; i<uzunluk; i++)
    {
        if(pntr==uzunluk)
        {
            printf("bu eleman vardir:\n");
        }
        else
        {
            printf("bu eleman yoktur:\n");
        }
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    int n;
    printf("dizimiz kaç elemanli olsun:\n");
    scanf("%d",&n);
    int arr[n];
    int *pntr;
    pntr=arr;
    printf("dizimin elemanlari:\n");
    int i;
    for (i=0; i<n; i++)
    {
        arr[i]=rand()%100;
    }
    
    for (i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("dizide kontrol edecegimiz elemani giriniz:\n");
    //bu eleman m degeri olmalı
    int m;
    scanf("%d",&m);
    
    elemanvarmi(arr[n],n);
    
    
  
 return 0;
}
