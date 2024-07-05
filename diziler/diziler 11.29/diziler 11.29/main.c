//
//  main.c
//  diziler 11.29
//
//  Created by Ecem Aydın on 14.03.2023.
//

#include <stdio.h>

int main()
{
    int arr[15];
    printf("dizinin elemanlarını giriniz(15):");
    int i,j,temp;
    for (i=0; i<15; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<15; i++)
    {
        for (j=i; j<15; j++)
        {
            
            if(arr[i]%2==0)
            {
                
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
    }
    
    for (i=0; i<15; i++)
    {
        printf("%d ",arr[i]);
        
    }
    
    return 0;
}
