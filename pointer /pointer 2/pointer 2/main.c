//
//  main.c
//  pointer 2
//
//  Created by Ecem Aydın on 18.02.2023.
// kullanıcıdan dizi için eleman sayısı al rastgele dizi yazdır pointer la en büyük elemanı bul

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max(int *dizi,int boyut)
{
    int maks;
    maks=dizi[0];
    int i;
    for (i=0; i<boyut; i++)
    {
        if(dizi[i]>maks)
        {
            maks=dizi[i];
        }
    }
    return maks;
}

int main()
{
    int n;
    printf("lutfen dizinin kac elemanli olacagini yaziniz:\n");
    scanf("%d",&n);
    int array[n];
    srand(time(NULL));
    int i;
    for (i=0; i<=n; i++)
    {
        array[i]=rand()%10;
    }
    for (i=0; i<n; i++)
    {
        printf("%d",array[i]);
    }
    
    int maks=max(array,n);
    
    printf("\n");
    
    printf("dizinin en büyük elemani %d dir\n",maks);
    return 0;
}
