//
//  main.c
//  diziler 2018 1.ö quiz
//
//  Created by Ecem Aydın on 15.03.2023.
//

#include <stdio.h>
int siralikontrol(int arr[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2])
        {
            printf("sıralı değil\n");
            return 0;
            break;
        }
        else if(arr[i]>arr[i+1] && arr[i+1]<arr[i+2])
        {
            printf("sıralı değil\n");
            return 0;
            break;
        }
        if(arr[i]<arr[i+1])
        {
            printf("kücükten büyüğe\n");
            return 1;
            break;
        }
        else if(arr[i]>arr[i+1])
        {
            printf("büyükten küçüğe\n");
            return 1;
            break;
        }
        
    }
    return 0;
}

int main()
{
    int n,x;
    printf("dizi boyu giriniz:\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("degerler\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    x=siralikontrol(arr,n);
    printf("fonksiyondan dönen deger:%d",x);
    
    return 0;
}
