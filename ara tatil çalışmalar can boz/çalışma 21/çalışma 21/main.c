//
//  main.c
//  çalışma 21
//
//  Created by Ecem Aydın on 24.01.2023.
// CAN BOZ 6. BÖLÜM 147. SORU

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void kelebek(char karakter,int kenar)
{
    int i;
    int j;
    for (i=kenar; i>=0; i--)
    {
        for (j=1; j<=kenar-i; j++)
        {
            printf(" ");
        }
        for (j=1; j<=2*i-1; j++)
        {
            printf("%c",karakter);
        }
        printf("\n");
    }

    for (i=1; i<kenar; i++)
    {
        for (j=1; j<=kenar-i; j++)
        {
            printf(" ");
        }
        for (j=1; j<=2*i-1; j++)
        {
            printf("%c",karakter);
        }
        printf("\n");
    }
}

int main()
{
    printf("kelebeği çizelim.\n");
    char karakter;
    printf("lutfen karakter giriniz:\n");
    scanf("%c",&karakter);
    int kenar;
    printf("lutfen kenar giriniz:\n");
    scanf("%d",&kenar);
    
    kelebek(karakter,kenar);
    
    return 0;
}


