//
//  main.c
//  çalışma 25
//
//  Created by Ecem Aydın on 28.01.2023.
// CAN BOZ 7. BÖLÜM 155. SORU

#include <stdio.h>

int main()
{
    int i,j;
    printf("%4c ",'I');
    
    for (i=1; i<=10; i++)
    {
        printf("%4.d",i);
    }
    printf("\n");
    for (i=1; i<=10; i++)
    {
        printf("-----");
    }
    printf("\n");
    
    for (i=1; i<=10; i++)
    {
       
        for (j=1; j<=10; j++)
        {
            printf("%4,d",i*j);
        }
        printf("\n");
    }
    return 0;
}
