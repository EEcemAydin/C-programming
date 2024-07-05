//
//  main.c
//  matris 8
//
//  Created by Ecem Aydın on 7.03.2023.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int arr[8][8];
    int i, j;
    for (i = 1; i < 8; i++)
    {
        for (j = 1; j < 8; j++)
        {
            arr[i][j] = (rand() % 48) + 1;
        }
    }
    printf("  ");
    for (i = 0; i < 1; i++)
    {
        for (j = 1; j < 8; j++)
        {
            printf(" | %d", j);
        }
    }
    printf("\n");

    for (i = 1; i < 8; i++)
    {
        printf("[%d]", i);
        for (j = 1; j < 8; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 
