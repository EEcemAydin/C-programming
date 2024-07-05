//
//  main.c
//  diziler udemy3
//
//  Created by Ecem Aydın on 12.12.2022.
//kullanıcıdan sayı isteyerek dizi oluşturma

#include <stdio.h>

int main()
{
    int dizi[5];
    int i;
    
    printf("lütfen beş sayi giriniz\n");
    for(i=0;i<5;i++)
    {
        
        scanf("%d",&dizi[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d\n",dizi[i]);
    }
    return 0;
}

