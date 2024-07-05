//
//  main.c
//  diziler 2017 1.ö quiz
//
//  Created by Ecem Aydın on 15.03.2023.
//

#include <stdio.h>
int buyukToplamiBul(int arr[],int n)
{
    int i;
    int top=0;
    int full=0;
    printf("cift sayılar");
    for (i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            top=top+arr[i];
            printf("%d ",arr[i]);
        }
       
    }
    printf("\n");
    printf("cift sayilar toplamı:%d\n",top);
    printf("tek sayılar");
    for (i=0; i<n; i++)
    {
        if(arr[i]%2==1)
        {
            full=full+arr[i];
            printf("%d ",arr[i]);
        }
       
    }
    printf("\n");
    printf("tek sayilar toplamı:%d\n",full);
    if(full>top)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
    
}
int main()
{
    int n,x;
    printf("lutfen dizi boyutu giriniz:\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("elemanları giriniz:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    x=buyukToplamiBul(arr,n);
    if(x==1)
    {
        printf("tek sayılar daha büyüktür.\n");
    }
    else
    {
        printf("cift sayılar daha büyüktür.\n");
    }
    return 0;
}
