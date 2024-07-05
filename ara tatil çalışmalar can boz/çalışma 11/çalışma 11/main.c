//
//  main.c
//  çalışma 11
//
//  Created by Ecem Aydın on 20.01.2023.
// CAN BOZ 6. BÖLÜM 131. SORU

#include <stdio.h>

int mukemmel_sayi(int num)
{
    int i;
    int toplam;
    for (i=2; i<num; i++)
    {
        if(num%i==0)
        {
            toplam=toplam+i;
        }
    }
    if(num==toplam)
    {
        printf("mukemmel sayidir.\n");
    }
    else
    {
        printf("mukemmel sayi degildir.\n");
    }    return 0;
}


int main ( )
{
    int num;
    printf("please enter a number.\n");
    scanf("%d",&num);
    
    mukemmel_sayi(num);
    return 0;
}
