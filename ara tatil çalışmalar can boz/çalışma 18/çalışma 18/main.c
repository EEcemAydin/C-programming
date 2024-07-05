//
//  main.c
//  çalışma 18
//
//  Created by Ecem Aydın on 23.01.2023.
// CAN BOZ 6. BÖLÜM 141. SORU

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void diziekleme(dizi[ ],int n,int i,int sira,int deger)
{
    if(sira<=n+1)
    {
        for (i=n-1; i=sira-1; i--)
        {
            dizi[i+1]=dizi[i];
        }
        dizi[sira-1]=dizi[deger];
        printf("yeni dizim:\n");
        for (i=0; i<n; i++)
        {
            printf("%d",dizi[i]);
        }
    }
    else
    {
        printf("geçersiz sıra numarası.\n");
    }
}
int main()
{
    int n;
    int i;
    int sira;
    int deger;
    printf("kaç adet sayı gireceğiz?\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(NULL));
    for (i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
    }
    printf("hangi siraya ekleyeceğiz?\n");
    scanf("%d",&sira);
    printf("eklenecek sayiyi giriniz.\n");
    scanf("%d",&deger);
    
    diziekleme(dizi,n,i,sira,deger);
    
    return 0;
}

