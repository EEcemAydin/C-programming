//
//  main.c
//  çalışma 16
//
//  Created by Ecem Aydın on 22.01.2023.
// CAN BOZ 6. BÖLÜM 137. SORU

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main( )
{
    int n;
    printf("kaç adet sayı gireceğiz?\n");
    scanf("%d",&n);
    int buyuk_sayi[n];
    srand(time(NULL));
    printf("dizi elemanlar:\n");
    int i;
    for (i=0; ; i++)
    {
        buyuk_sayi[i]= rand()%100;
        printf("%d",buyuk_sayi[i]);
    }
    printf("en buyuk %d",enbuyuk(dizi,n));
    printf("en kucuk %d",enkucuk(dizi,n));
    return 0;
}

