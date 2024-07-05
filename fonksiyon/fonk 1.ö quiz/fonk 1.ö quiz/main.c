//
//  main.c
//  fonk 1.ö quiz
//
//  Created by Ecem Aydın on 28.11.2022.
//

#include <stdio.h>

void kum_saati_ustu(char karakter,int sayi)
{
    int m;
    int n;
    for(m=1;m<=sayi;m++)
    {
        for(n=1;n<=m-1;m++)
        {
            printf(" ");
        }
        
        for(n=1;n<=2*sayi-2*m+1;n++)
        {
            printf("%c",karakter);
        }
        
        printf("\n");
    }
    
    
}

void kum_saati_alti(char karakter,int sayi)
{
    int m;
    int n=0;
    for(m=1;n<=sayi;m++)
    {
        for(n=1;n<=sayi-m;n++)
        {
            printf(" ");
        }
        
        for(n=1;n<=2*sayi-1;n++)
        {
            printf("%c",karakter);
        }
        printf("\n");
    }
    
}


int main()
{
    char karakter;
    printf("lutfen karaket giriniz:\n");
    scanf("%c",&karakter);
    
    int sayi;
    printf("lutfen m yani sayi giriniz:\n");
    scanf("%d",&sayi);
    
    kum_saati_ustu(karakter,sayi);
    kum_saati_alti(karakter,sayi);
    
    return 0;
}
