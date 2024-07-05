//
//  main.c
//  matris 4
//
//  Created by Ecem Aydın on 4.03.2023.
//

#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j;
    printf("matrisin elemanlarini giriniz:\n");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<3; i++)
    {
        printf("a dizisinin %d . satırı: %2d%2d%2d\n",i+1,a[i][0],a[i][1],a[i][2]);
        
    }
    int top=0;
    for (i=0; i<3; i++)
    {
        top=a[i][0]+a[i][1]+a[i][2];
        printf("%2d%2d%2d%4d\n",a[i][0],a[i][1],a[i][2],top);
       
    }

    printf("-------\n");
    
    for (j=0; j<3; j++)
    {
        top=a[0][j]+a[1][j]+a[2][j];
        printf("%2d",top);
       
    }
    printf("\n");
    return 0;
}
