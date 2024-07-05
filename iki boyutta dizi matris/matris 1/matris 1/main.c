//
//  main.c
//  matris 1
//
//  Created by Ecem Aydın on 3.03.2023.
//

#include <stdio.h>
//matris kösegeni

int main()
{
    int n=4;
    int i,j;
    int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{12,14,15,16}};
    printf("matris:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%2d ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("matris kösegeni:\n");
    for (i=0; i<n; i++)
    {
        printf("%d ",matris[i][i]);
    }
    return 0;
}


