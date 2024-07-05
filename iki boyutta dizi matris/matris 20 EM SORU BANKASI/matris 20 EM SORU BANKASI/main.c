//
//  main.c
//  matris 20 EM SORU BANKASI
//
//  Created by Ecem Aydın on 23.03.2023.
//

#include <stdio.h>
void sayac(int n,int arr[n][n])
{
    int i,j;
    int pozsay=0,negsay=0,sıfsay=0;
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
            else if (arr[i][j]>0)
            {
                pozsay++;
            }
        }
    }
    printf("poizitif eleman sayisi:%d",pozsay);
    printf("negatif eleman sayisi:%d",negsay);
    printf("sıfır eleman sayisi:%d",sıfsay);
    
}
int matrissimetrikmi(int n,int arr[n][n])
{
    int i,j,control=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(arr[i][j]==arr[j][i])
            {
                control=1;
            }
            else if(arr[i][j]!=arr[j][i])
            {
                control=0;
            }
            
        }
    }
    return control;
}
void simetrikmatris(int n,int arr[n][n])
{
    int i,j;
    int carpım=1;
    for (i=0; i<n; i++)
    {
        carpım=carpım*arr[i][n-1-i];
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n;  j++)
        {
            arr[i][j]=carpım-arr[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n;  j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    sayac(n,arr);
}
void simetrikolmayan(int n,int arr[n][n])
{
    int i,j,k,temp,top=0,ort,m,ortanca;
    if(n%2==1)
    {
        for (i=0; i<n; i++)
        {
            temp=arr[i][0];
            
            for (j=0; j<n; j++)
            {
                for (k=j; k<n; k++)
                {
                    if(arr[i][j]>arr[i][k])
                    {
                        temp=arr[i][k];
                        arr[i][k]=arr[i][j];
                        arr[i][j]=arr[i][k];
                    }
                }
                
            }
            for (m=0; m<n; m++)
            {
                ortanca=arr[i][n/2];
                arr[i][m]=ortanca-arr[i][m];
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
    }
    else if(n%2==0)
    {
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                top=top+arr[i][j];
            }
            ort=top/4;
            for (j=0; j<n; j++)
            {
                arr[i][j]=ort-arr[i][j];
            }
        }
    }
    sayac(n,arr);
    
}

int main()
{
    int m,n;
    int i,j;
    printf("matrisin boyutlarını giriniz:");
dön:
    scanf("%d%d",&m,&n);
    if(m==n)
    {
        printf("matris karedir boyutu n den devam edelim.");
        if(n<3)
        {
            printf("boyutu kücük girdiniz.");
            goto dön;
        }
    }
    else if(m!=n)
    {
        printf("tekrar boyut giriniz.");
        goto dön;
    }
    int arr[n][n];
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrisim:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    int a;
    a=matrissimetrikmi(n,arr);
    if(a)
    {
        simetrikmatris(n,arr);
    }
    else
    {
        simetrikolmayan(n,arr);
    }
    
    return 0;
}
