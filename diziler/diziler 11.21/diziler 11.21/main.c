//
//  main.c
//  diziler 11.21
//
//  Created by Ecem Aydın on 11.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
float interQuartile(int arr[],int n)
{
    int i,j,temp;
    for (i=0; i<n; i++)
    {
        for (j=i; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    float ort;
    float toplam=0;
    for (i=n/4; i<(3*n)/4; i++)
    {
        toplam=toplam+arr[i];
    }
    ort=toplam/(n/2);
    printf("dizinin çeyrekler ortalaması:");
    return ort;
}
int main()
{
    srand(time(NULL));
    int n;
    printf("lutfen dizinin eleman sayısını giriniz:");
    scanf("%d",&n);
    int arr[n];
    int i;
    for (i=0; i<n; i++)
    {
        arr[i]=rand()%100;
    }
   printf("%f",interQuartile(arr,n));
    
    return 0;
}
*/
int main( )
{
    int a[5];
    int b[5];
    int top[5];
    int i,j,k;
    printf("1. dizinin elemanlarini giriniz:");
    for (i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("2. dizinin elemanlarini giriniz:");
    for (j=0; j<5; j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\n");
    printf("elemanların toplamı olan dizi:");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            for (k=0; k<5; k++)
            {
                top[k]=a[i]+b[j];
                printf("%d ",top[k]);
            }
        }
    }
  
    
    return 0;
}
