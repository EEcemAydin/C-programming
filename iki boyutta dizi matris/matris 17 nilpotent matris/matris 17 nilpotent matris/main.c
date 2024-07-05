//
//  main.c
//  matris 17 nilpotent matris
//
//  Created by Ecem Aydın on 23.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int  nilpotentmi(int n,int arr[n][n])
{
    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(arr[i][j]==0)
            {
                return 1;
            }
            else if(arr[i][j]!=0)
            {
                return 0;
            }
        }
    }
    return 0;
}
int main()
{
    srand(time(NULL));
    int n;
    printf("kare matris boyutunu giriniz:\n");
    scanf("%d",&n);
    int arr[n][n];
    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            arr[i][j]=rand()%11;
        }
    }
    printf("rastgele elemanlı matrisim:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%4d",arr[i][j]);
         
        }
        printf("\n");
    }
    int x;
    x=nilpotentmi(n,arr);
    if(x==0)
    {
        printf("nilpotent degildir.\n");
    }
    if(x==1)
    {
        printf("matris nilpotenttir.\n");
    }
    return 0;
}
