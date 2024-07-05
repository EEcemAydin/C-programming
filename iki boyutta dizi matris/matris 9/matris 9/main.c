//
//  main.c
//  matris 9
//
//  Created by Ecem Aydın on 7.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int arr[9][9];
    int i,j;
    printf("   ");
    for (j=0; j<9; j++)
    {
        printf(" |%4d",j);
    }
    printf("\n");
    
    for (j=0; j<9; j++)
    {
        arr[1][j]=0;
    }
    for (j=0; j<9; j++)
    {
        arr[4][j]=0;
    }
    for (j=0; j<9; j++)
    {
        arr[7][j]=0;
    }
    
    for (i=0; i<9; i++)
    {
        printf("[%d]",i);
        for (j=0; j<9; j++)
        {
            printf("%6d",arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
    
 }
