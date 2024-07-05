//
//  main.c
//  string c prog 13.22
//
//  Created by Ecem Aydın on 12.04.2023.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char isim[10][15];
    printf("isimleri giriniz:\n");
    int i,j,temp;
    char tasiyici[15];
    for (i=0; i<10; i++)
    {
        fgets(isim[i], 15, stdin);
    }
    int uzunluk[10];
    for (i=0; i<10; i++)
    {
        uzunluk[i]=strlen(isim[i]);
    }
    for (i=0; i<10; i++)
    {
        for (j=i; j<15; j++)
        {
            if(uzunluk[i]<uzunluk[j])
            {
                temp=uzunluk[i];
                uzunluk[i]=uzunluk[j];
                uzunluk[j]=temp;
            }
            if(isim[i][0]<isim[j][0])
            {
                strcpy(tasiyici,isim[i]);
                strcpy(isim[i], isim[j]);
                strcpy(isim[j], tasiyici);
            }
        }
        
        
    }
    for (i=0; i<10; i++)
    {
        puts(isim[i]);
    }
    return 0;
}

