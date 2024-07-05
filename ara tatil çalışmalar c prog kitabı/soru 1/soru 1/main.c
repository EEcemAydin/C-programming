//
//  main.c
//  soru 1
//
//  Created by Ecem Aydın on 28.01.2023.
// c prog kitabı sayfa 210 örnek 3

#include <stdio.h>

int main()
{
    int i;
    int sayi[5];
    printf("lütfen beş sayi giriniz:\n");
    for (i=0; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }
    
    printf("yeni dizi:\n");
    for (i=0; i<3 ; i++)
    {
        int kamyon;
        kamyon=sayi[i];
        sayi[i]=sayi[4-i];
        sayi[4-i]=kamyon;
        
    }
    
    for (i=0; i<5; i++)
    {
        printf("%d\n",sayi[i]);
    }
    return 0;
}

