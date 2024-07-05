//
//  main.c
//  matris 11
//
//  Created by Ecem Aydın on 8.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void control(int arr[9][9])
{
    int min,mini=0,minj=0;
    int i,j,a;
    
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
           
            a=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            if(a<min)
            {
                min=a;
                mini=i;
                minj=j;
            }
        }
    }
    printf("sonuc:\n");
    printf("evin yapılacagı parsellerin satır ve sutub numaraları:\n");
    printf("%d-%d %d-%d %d-%d %d-%d",mini+1,minj+1,mini+1,minj+2,mini+2,minj+1,mini+2,minj+2);
}
int main()
{
    srand(time(NULL));
    int arr[10][10];
    int i,j;
    printf("arazinin parsel verimliliklerini giriniz(10*10):\n");
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            arr[i][j]=(rand()%99)+1;
            printf("%4d ",arr[i][j]);
        }
        printf("\n");
    }
    
    control(arr);
    return 0;
}
