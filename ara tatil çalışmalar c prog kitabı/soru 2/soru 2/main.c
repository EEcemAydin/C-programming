//
//  main.c
//  soru 2
//
//  Created by Ecem Aydın on 28.01.2023.
// c prog kitabı sayfa 211 örnek 4

#include <stdio.h>

int main()
{
    int notlar[20];
    int toplam;
    printf("lütfen 20 notu programa yazınız:\n");
    int i;
    for (i=0; i<20; i++)
    {
        scanf("%d",&notlar[i]);
        toplam=toplam+notlar[i];
    }
    float ortalama;
    ortalama=toplam/20;
    printf("ortalama:%f",ortalama);
    
    for (i=0; i<20; i++)
    {
        if(ortalama<=notlar[i])
        {
            printf("%d\n",notlar[i]);
        }
    }
    return 0;
}
