//
//  main.c
//  pointer 8
//
//  Created by Ecem Aydın on 21.02.2023.
// can boz 176. video

#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    printf("lutfen dizinin kaç elemanli oldugunu belirleyiniz:\n");
    scanf("%d",&n);
    int *pntr;
    pntr=arr;
    int i;
    printf("dizinin elemanlari:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("degerler:\n");
    int a;
    for (a=0; a<n; a++)
    {
        printf("%d\n",*pntr);
        pntr++;
    }
    
    
    return 0;
}
