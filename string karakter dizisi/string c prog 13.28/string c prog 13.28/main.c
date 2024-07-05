//
//  main.c
//  string c prog 13.28
//
//  Created by Ecem Aydın on 15.04.2023.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    char sifatlar[5][15] = {"Bu", "Su", "O", "Bir", "Birkac"};
    char ozne[5][15] = {"adam", "cocuk", "kuş", "kedi", "araba"};
    char tumlec[5][15] = {"sinif", "kapan", "orman", "cayir", "agac"};
    char tumlecek[5][15] = {"a", "dan", "ın üstünden", "ın altından", "ın içinden"};
    char yüklem[5][15] = {"atladı.", "kaçtı.", "zıpladı", "koştu", "düştü"};
    char kurallicümle[75];
    int i,m,a;
    for (i=0; i<20; i++)
    {
        m=rand()%5;
        strcat(kurallicümle,sifatlar[m]);
        strcat(kurallicümle, " ");
        m=rand()%5;
        strcat(kurallicümle,ozne[m]);
        strcat(kurallicümle, " ");
        m=rand()%5;
        strcat(kurallicümle,tumlec[m]);
        strcat(kurallicümle, " ");
        m=rand()%5;
        strcat(kurallicümle,tumlecek[m]);
        strcat(kurallicümle, " ");
        m=rand()%5;
        strcat(kurallicümle,yüklem[m]);
        strcat(kurallicümle, " ");
        puts(kurallicümle);
        printf("\n");
        strcpy(kurallicümle, " ");
    }
    
    return 0;
}
