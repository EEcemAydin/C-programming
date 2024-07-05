//
//  main.c
//  matris 12
//
//  Created by Ecem Aydın on 18.03.2023.
//

#include <stdio.h>

int main()
{
    int arr[6][4];
    int j;
    int min,minj=0;
    printf("katmanların sertlik miktarını giriniz:\n");
    printf("1.katman");
    for (j=0; j<4; j++)
    {
        scanf("%d",&arr[0][j]);
    }
    printf("2.katman");
    for (j=0; j<4; j++)
    {
        scanf("%d",&arr[1][j]);
    }
    printf("3.katman");
    for (j=0; j<4; j++)
    {
        scanf("%d",&arr[2][j]);
    }
    printf("4.katman");
    for (j=0; j<4; j++)
    {
        scanf("%d",&arr[3][j]);
    }
    printf("5.katman");
    for (j=0; j<4; j++)
    {
        scanf("%d",&arr[4][j]);
    }
    for (j=0; j<4; j++)
    {
        arr[5][j]=arr[0][j]+arr[1][j]+arr[2][j]+arr[3][j]+arr[4][j];
    }
    min=arr[5][0];
    for (j=0; j<4; j++)
    {
        if(arr[5][j]<min)
        {
            min=arr[5][j];
            minj=j;
        }
    }
    int i,son=0;
    for (i=0; i<5; i++)
    {
        son=son+arr[i][minj];
        if(son>10)
        {
            goto son;
        }
    }
son:
    printf("burgu %d . kuyunun %d . katmanında degistirilir.\n",minj+1,i+1);
    return 0;
}
