//
//  main.c
//  yarım baklava
//
//  Created by Ecem Aydın on 21.11.2022.
//

#include <stdio.h>

int main()
{
    int sayi,i,j;
    printf("sayi giriniz");
    scanf("%d",&sayi);
    for(i=0;i<sayi;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(i=0;i<sayi-1;i++)
    {
        for(j=0;j<sayi-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
  
    return 0;
}
