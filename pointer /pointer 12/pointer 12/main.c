//
//  main.c
//  pointer 12
//
//  Created by Ecem Aydın on 1.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *pntr1,*pntr2,n;
    printf("dizinin eleman sayisini alınız:\n");
    scanf("%d",&n);
    int arr[n];
    
    printf("dizinin elemanlari:\n");
    for (pntr1=arr; pntr1<arr+n; pntr1++)
    {
        scanf("%d",pntr1);
    }
    printf("dizim:");
    for (pntr1=arr; pntr1<arr+n; pntr1++)
    {
        printf("%d ",*pntr1);
    }

    for (pntr1=arr,pntr2=arr+n; pntr1=arr+(n/2); pntr1++,pntr2--)
    {
        int temp;
        temp=*pntr1;
        *pntr1=*pntr2;
        *pntr2=temp;
        
    }
    printf("dizinin tersi:\n");
    
    for (pntr1=arr; pntr1<arr+n; pntr1++)
    {
        printf("%d ",*pntr1);
    }
    
  
    return 0;
}
