//
//  main.c
//  matris 15
//
//  Created by Ecem Aydın on 21.03.2023.
//

#include <stdio.h>
void   kosedeger(int n,int arr[][n])
{
    int carpım;
    carpım=arr[0][0]*arr[0][n-1]*arr[n-1][0]*arr[n-1][n-1];
    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(carpım-arr[i][j]>=0)
            {
                arr[i][j]=carpım-arr[i][j];
            }
        }
    }
    for (i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<n; j++)
        {
            printf("%4d",arr[i][j]);
        }
    
    }
    int teksay=0,ciftsay=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(arr[i][j]%2==1)
            {
                teksay++;
            }
            else if(arr[i][j]%2==0)
            {
                ciftsay++;
            }
        }
    }
    printf("\ntek sayıların sayısı:%d\n",teksay);
    printf("cift sayıların sayısı:%d\n",ciftsay);
    
}
int main()
{
    int n;
    printf("matris boyutu giriniz");
dön:
    scanf("%d",&n);
    int arr[n][n];
    if(n<2)
    {
        printf("en az iki olacak alooooo");
        goto dön;
    }
    int i,j;
    for (i=0; i<n; i++)
    {
       
        for (j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    kosedeger(n,arr);
    
    
    return 0;
}
