//
//  main.c
//  çalışma 23
//
//  Created by Ecem Aydın on 26.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sonucbul(int deger)
{
    int i;
    int toplam=0;
    for (i=1; i<=deger; i++)
    {
        toplam=toplam+pow(i, 2);
        
    }
    return toplam;
}
int main()
{
    int deger;
    printf("hangi degere kadar girecegiz\n");
    scanf("%d",&deger);
    sonucbul(deger);
    printf("%d",sonucbul(deger));
    
    return 0;
}
