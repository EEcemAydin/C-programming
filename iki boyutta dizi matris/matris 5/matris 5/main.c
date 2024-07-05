//
//  main.c
//  matris 5
//
//  Created by Ecem Aydın on 4.03.2023.
//

#include <stdio.h>

int main()
{
    char arr[8][8];
    int i,j;
    printf("satranc tahtasi\n");
    for (i=0; i<8; i++)
    {
        for (j=0; j<8; j++)
        {
            arr[i][j]='-';
        }
    }
    
    int x,y;
    printf("atın konumunu giriniz(x,y)\n");
    scanf("%d%d",&x,&y);
    printf("at(%d,%d)\n",x,y);
    arr[x][y]='A';
    arr[x-2][y+1]='*';
    arr[x-2][y-1]='*';
    arr[x-1][y+2]='*';
    arr[x-1][y-2]='*';
    arr[x+2][y+1]='*';
    arr[x+2][y-1]='*';
    arr[x+1][y+2]='*';
    arr[x+1][y-2]='*';

    for (i=0; i<8; i++)
    {
        for (j=0; j<8; j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
