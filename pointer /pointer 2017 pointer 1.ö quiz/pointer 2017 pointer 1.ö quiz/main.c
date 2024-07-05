//
//  main.c
//  pointer 2017 pointer 1.ö quiz
//
//  Created by Ecem Aydın on 3.04.2023.
//

#include <stdio.h>
void buyuk_kucuk_bul(int arr[], int *enb, int *enk,int boy)
{
    int i;
    for (i=0; i<boy; i++)
    {
        if(arr[i]>*enb)
        {
            *enb=arr[i];
         
        }
    }
    for (i=0; i<boy; i++)
    {
        if(arr[i]<*enk)
        {
            *enk=arr[i];
        }
    }
    
}
int main()
{
    int boy;
    printf("dizinin boyutunu giriniz:");
    scanf("%d",&boy);
    
    int i;
    int arr[boy];
    for (i=0; i<boy; i++)
    {
        printf("dizinin %d . elemanını giriniz:",i+1);
        scanf("%d",&arr[i]);
        
    }
    int enb=0,enk;
    buyuk_kucuk_bul(arr, &enb, &enk,boy);
    printf("dizinin en buyuk elemani %d\n",enb);
    printf("dizinin en kucuk elemani %d\n",enk);
    return 0;
}
