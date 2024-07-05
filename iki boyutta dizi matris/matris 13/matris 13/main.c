//
//  main.c
//  matris 13
//
//  Created by Ecem Aydın on 20.03.2023.
//m hareket

#include <stdio.h>

int main()
{
    int arr[6][5];
    int k,l,m;
    int i,j;
    
    printf("robotun baslangıc satır ve sutununu giriniz:\n");
    scanf("%d%d",&k,&l);
    k--;
    l--;
    for (i=0; i<6; i++)
    {
        for (j=0; j<5; j++)
        {
            arr[i][j]=0;
        }
        
    }
    
    printf("programı sonlandırmak için sıfır giriniz.\n(1:sağ 2:sol 3:asağı 4:yukarı)");
    printf("komutları giriniz:");
    arr[k][l]=1;
    while (1)
    {
        scanf("%d",&m);
        if(m==1)
        {
            l++;
            arr[k][l]=1;
        }
        else if(m==2)
        {
            l--;
            arr[k][l]=1;
        }
        else if(m==3)
        {
            k++;
            arr[k][l]=1;
        }
        else if(m==4)
        {
            k--;
            arr[k][l]=1;
        }
        else
        {
            break;
        }
    }
    for (i=0; i<6; i++)
    {
        printf("\n");
        for (j=0; j<5; j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}
