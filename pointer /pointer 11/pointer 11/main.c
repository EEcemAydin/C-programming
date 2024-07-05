//
//  main.c
//  pointer 11
//
//  Created by Ecem Aydın on 1.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
//pointersız
int find(int arr[ ],int n,int num)
{
    int i;
    for (i=0; i<n; i++)
    {
        if(num==arr[i])
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    printf("enter array size\n");
    int n,returnnum;
    scanf("%d",&n);
    int arr[n];
    
    int i;
    for (i=0; i<n; i++)
    {
        arr[i]=rand()%100;
    }
    for (i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("enter a number\n");
    int num;
    scanf("%d",&num);
    returnnum=find(arr,n,num);
    
    if(returnnum)
    {
        printf("%d elemani vardir.\n",num);
    }
    else
    {
        printf("%d elemani yoktur.\n",num);
    }
    return 0;
}
*/

int find(int arr[ ],int n,int num)
{
    int *pntr;
    for (pntr=arr;pntr<arr+n;pntr++)
    {
        if(num==*pntr)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    printf("enter array size\n");
    int n,returnnum;
    scanf("%d",&n);
    int arr[n];
    
    int *pntr;
    
    for (pntr=arr; pntr<arr+n; pntr++)
    {
        *pntr=rand()%100;
    }
    for (pntr=arr; pntr<arr+n; pntr++)
    {
        printf("%d ",*pntr);
    }
    
    printf("enter a number\n");
    int num;
    scanf("%d",&num);
    returnnum=find(arr,n,num);
    
    if(returnnum)
    {
        printf("%d elemani vardir.\n",num);
    }
    else
    {
        printf("%d elemani yoktur.\n",num);
    }
    return 0;
}

