//
//  main.c
//  matris 6
//
//  Created by Ecem Aydın on 6.03.2023.
//

#include <stdio.h>

int main()
{
    int arr[5][5];
    int i,j;
    printf("kanaldaki peynir miktarını giriniz:\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int top=0;
    for (i=0; i<5; i++)
    {
        top=arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3];
        arr[i][4]=top;
    }
    int max=0,maxi;
    for (i=0; i<5; i++)
    {
        if(max<arr[i][4])
        {
            max=arr[i][4];
            maxi=i;
        }
    }
    top=0;
    for (j=0; j<4; j++)
    {
        top+=arr[maxi][j];
        if(top>=5)
        {
            printf("\nkanal faresi %d. kanalın %d . bölgesinde uykuya daldı.",maxi+1,j+1);
            break;
        }
    }
    return 0;
}
