//
//  main.c
//  diziler 11.18
//
//  Created by Ecem Aydın on 12.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n;
    printf("eleman sayisi giriniz:\n");
    scanf("%d",&n);
    int arr[n],brr[n];
    int i;
    for (i=0; i<n; i++)
    {
        brr[i]=arr[i]=rand()%100;
    }
    printf("otomotik oluşturulmuş dizi:");
    for (i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    int j,temp;
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
    printf("\n");
    printf("dizinin sıralanmis hali:");
    for (i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("yeri değişmeyenlerin sayısı:");
    int say=0;
    for (i=0; i<n; i++)
    {
        if(arr[i]==brr[i])
        {
            say++;
        }
    }
    printf("%d\n",say);
    return 0;
}
