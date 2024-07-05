//
//  main.c
//  çalışma 17
//
//  Created by Ecem Aydın on 23.01.2023.
// CAN BOZ 6. BÖLÜM 138. SORU

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void kayitsil(dizi[ ],int sira,int n)
{
    int i;
    if(sira>n)
    {
        printf("sayi gecerli degil.\n");
    }
    else{
        for (i=sira-1; i<n-1; i++)
        {
            dizi[i]=dizi[i+1];
        }
        for (i=0; i<n-1; i++)
        {
            printf("%d",dizi[i]);
        }
    }
    
}
int main( )
{
    int n;
    printf("kaç adet sayi gireceğiz?\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(NULL));
    int i;
    for (i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d",dizi[i]);
    }
    int sira;
    printf("kaç numaralı dizi elemanı silinecek?\n");
    scanf("%d",&sira);
    kayitsil(dizi[i],sira,n);
    return 0;
}
