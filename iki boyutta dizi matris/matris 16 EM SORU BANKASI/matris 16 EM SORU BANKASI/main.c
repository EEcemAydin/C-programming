//
//  main.c
//  matris 16 EM SORU BANKASI
//
//  Created by Ecem Aydın on 22.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void cıkarmalıfonk(int n,int arr[n][n],int a)
{
    int i,j;
    int pozsay=0;
    int negsay=0;
    int sıfsay=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            arr[i][j]=a-arr[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(arr[i][j]<0)
            {
                negsay++;
            }
            else if(arr[i][j]==0)
            {
                sıfsay++;
            }
            else
            {
                pozsay++;
            }
        }
        
    }
    printf("pozitif sayı adedi:%d\n",pozsay);
    printf("negatif sayı adedi:%d\n",negsay);
    printf("sıfır sayı adedi:%d\n",sıfsay);
}
int main()
{
    srand(time(0));
    printf("matris boyutlarını giriniz:\n");
    int m,n;
dön:
    scanf("%d%d",&m,&n);
    if(m!=n)
    {
        printf("kare matris degildir.\n");
        goto dön;
    }
    if(m<=2)
    {
        printf("boyutu büyüt");
        goto dön;
    }
    int arr[m][n];
    int i,j;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            arr[i][j]=rand()%1000;
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    int top=0;
    for (i=0; i<n; i++)
    {
        top=(top+arr[i][n-1-i]);
    }
    int a;
    a=top/n;
    printf("toplam/n:%d\n",a);
    cıkarmalıfonk(n,arr,a);
    return 0;
}
