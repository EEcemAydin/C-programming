//
//  main.c
//  diziler 1.ö quiz
//
//  Created by Ecem Aydın on 14.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
void  arrsmerge(int arr1[],int arr2[],int n1,int n2,int arrs[])
{
    int i;
    for (i=0; i<n1; i++)
    {
        arrs[i]=arr1[i];
    }
    for (i=n1; i<n1+n2; i++)
    {
        arrs[i]=arr2[i-n1];
    }
    
}
void sort(int arrs[],int n3)
{
    int i,j,temp=0;
    for (i=0; i<n3; i++)
    {
        for (j=i; j<n3; j++)
        {
            if(arrs[i]>arrs[j])
            {
                temp=arrs[i];
                arrs[i]=arrs[j];
                arrs[j]=temp;
            }
        }
    }
    
    for (i = 0; i < n3; i++)
    {
        for (j = 0; j < n3; j++)
        {
            if (j != i && arrs[i] == arrs[j])
            {
                for (j; j<n3; j++)
                {
                    arrs[j]=arrs[j+1];
                }
                
            }
        }
    }
    
    for (j=0; j<n3; j++)
    {
        printf("%d ",arrs[j]);
    }
    
    
}

int main()
{
    int n1, n2;
    int i, j;
n1scan:
    printf("birinci dizi boyutunu giriniz(n1):");
    scanf("%d", &n1);
    int arr1[n1];
    if (4 <= n1 && n1 <= 15)
    {
    arr1scan:
        printf("1. dizide bulunacak sayilari giriniz:");
        for (i = 0; i < n1; i++)
        {
            scanf("%d", &arr1[i]);
            if (arr1[i] > 100)
            {
                printf("hatali giriş.");
                goto arr1scan;
            }
        }
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n1; j++)
            {
                if (j != i && arr1[i] == arr1[j])
                {
                    printf("dizide ayni var başa gidiniz\n");
                    goto arr1scan;
                }
            }
        }
    }
    
    else
    {
        printf("hatali giriş min 4 max 15 olmalidir.\n");
        goto n1scan;
    }
n2scan:
    printf("ikinci dizi boyutunu giriniz(n2):");
    scanf("%d", &n2);
    int arr2[n2];
    if (4 <= n2 && n2<= 15)
    {
    arr2scan:
        printf("2. dizide bulunacak sayilari giriniz:");
        for (i = 0; i < n2; i++)
        {
            scanf("%d", &arr2[i]);
            if (arr2[i] > 100)
            {
                printf("hatali giriş.");
                goto arr2scan;
            }
        }
        for (i = 0; i < n2; i++)
        {
            for (j = 0; j < n2; j++)
            {
                if (j != i && arr2[i] == arr2[j])
                {
                    printf("dizide ayni var başa gidiniz\n");
                    goto arr2scan;
                }
            }
        }
    }
    
    else
    {
        printf("hatali giriş min 4 max 15 olmalidir.\n");
        goto n2scan;
    }
    int arrs[n1+n2];
    arrsmerge(arr1,arr2,n1,n2,arrs);
    sort(arrs,n1+n2);
    return 0;
}
