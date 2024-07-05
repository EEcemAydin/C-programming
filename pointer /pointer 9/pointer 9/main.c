//
//  main.c
//  pointer 9
//
//  Created by Ecem Aydın on 22.02.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("dizimiz kaç elemanli olsun:\n");
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
    for (i=0; i<n; i++)
    {
        if(arr[i]==n)
        {
            printf("bu dizinin elemanidir.");
        }
        else
        {
            printf("bu dizinin elemani degildir.");
        }
    }
    
    
  
 return 0;
}
