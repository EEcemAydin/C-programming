//
//  main.c
//  matris 2
//
//  Created by Ecem Aydın on 3.03.2023.
//

#include <stdio.h>

//matrisin ters kösegeni

int main()
{
    int n=4;
    int i,j;
    int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printf("matris:\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%2d ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("ters kösegen matris:\n");
    for (i=0; i<n; i++)
    {
        printf("%d ",matris[i][n-1-i]);
    }
    
    return 0;
}
