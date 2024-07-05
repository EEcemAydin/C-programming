//
//  main.c
//  matris 7
//
//  Created by Ecem Aydın on 7.03.2023.
//

#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j;
    printf("dizimin:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<3; i++)
    {
            printf("a dizisinin %d .satiri:%d %d %d\n",i+1,a[i][0],a[i][1],a[i][2]);
    }
    int transpoz[3][3];
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            transpoz[j][i]=a[i][j];
        }
    }
    printf("çevrilmiş hali:\n");
    for (j=0; j<3; j++)
    {
        printf("%d %d %d\n",transpoz[j][0],transpoz[j][1],transpoz[j][2]);
    }
    
    
    
    return 0;
}
