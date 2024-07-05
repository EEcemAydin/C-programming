//
//  main.c
//  pointer 7
//
//  Created by Ecem Aydın on 20.02.2023.
//

#include <stdio.h>

int main()
{
    int n;
    int dizi[n];
    int *ptnr;
    ptnr=dizi;
    printf("lutfen dizinin kaç elemanlı olduğunu giriniz:\n");
    scanf("%d",&n);
    int i;
    printf("dizimin elemanlari\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",ptnr);
        ptnr++;
    }
    
    return 0;
}
