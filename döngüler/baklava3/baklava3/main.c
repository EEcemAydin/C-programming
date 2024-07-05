//
//  main.c
//  baklava3
//
//  Created by Ecem Aydın on 21.11.2022.
//

#include <stdio.h>

int main()
{
    int i,j,sayi;
    printf("lutfen sayi giriniz\n");
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
        for(j=0;sayi-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
