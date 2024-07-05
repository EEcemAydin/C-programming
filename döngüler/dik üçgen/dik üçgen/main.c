//
//  main.c
//  dik üçgen
//
//  Created by Ecem Aydın on 21.11.2022.
//

#include <stdio.h>

int main()
{
    int sayi,i,j;
    sayi=10;
    for(i=0;i<sayi;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
