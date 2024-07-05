#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct student
    {
        char ad[20];
        char soyad[20];
        float ort;
    };
    struct student veri[3], temp;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("%d.adı,soyadı,ortalama giriniz: ", i + 1);
        scanf("%s %s %f", veri[i].ad, veri[i].soyad, &veri[i].ort);
    }
    int a;
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            a = strcmp(veri[i].soyad, veri[j].soyad);
            if (a >0)
            {
                temp = veri[i];
                veri[i] = veri[j];
                veri[j] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s %s %.2f", veri[i].ad, veri[i].soyad, veri[i].ort);
        printf("\n");
    }
    return 0;
}