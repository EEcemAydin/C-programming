//
//  main.c
//  baklava2
//
//  Created by Ecem Aydın on 20.11.2022.
//

#include <stdio.h>

int main()
{
    int i;
    int j;
    int sekil;
    
    printf("lutfen sekil giriniz");
    scanf("%d",&sekil);
    
    for(i=1;i<=sekil;i++)
    {
        for(j=1;j<=sekil-i;j++)
        {
            printf(" ");
        }
         
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(i=1;i<=sekil-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        
        for(j=1;j<=2*(sekil-i)-1;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
   
    return 0;
}
