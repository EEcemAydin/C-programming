#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    struct ecza_deposu
    {
        char ilac_adi[15];
        int adet;
    };

    struct ecza_deposu bilgi[100];
    int i;
    int a;
    printf("ilac adlarini giriniz:");
    for (i = 0; i < 100; i++)
    {
        fgets(bilgi[i].ilac_adi, 15, stdin);
    }

    for (i = 0; i < 100; i++)
    {
        bilgi[i].adet = 1;
        for (int j = i + 1; j < 100; j++)
        {
            a = strcmp(bilgi[i].ilac_adi, bilgi[j].ilac_adi);
            if (a == 0)
            {
                bilgi[i].adet++;
            }
        }
    }
    for (i = 0; i < 100; i++)
    {
        if (bilgi[i].adet <= 20)
        {
            printf("ilaç adi:%s ilaç adedi:%d", bilgi[i].ilac_adi, bilgi[i].adet);
        }
    }

    return 0;
}