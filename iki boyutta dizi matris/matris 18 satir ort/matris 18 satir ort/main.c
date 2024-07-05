//
//  main.c
//  matris 18 satir ort
//
//  Created by Ecem Aydın on 23.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void  satirortbul(int n,int arr[n][n])
{
    int i,j;
    float top;
    float ort;
    printf("ortalama:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            top=top+arr[i][j];
            ort=top/n;
        }
        printf("%.2f  ",ort);
    }
  
}
int main()
{
    srand(time(NULL));
    int n;
    printf("kare matris boyutu giriniz:\n");
    scanf("%d",&n);
    int arr[n][n];
    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            arr[i][j]=(rand()%899)+100;
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    satirortbul(n,arr);
    
    return 0;
}
