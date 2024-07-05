#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct ogrenci
    {
        char ad[20];
        char soyad[20];
        int numara;
        int kayit_yili;
    };
    int n, i;
    printf("ogrenci sayisini giriniz: ");
    scanf("%d", &n);
    struct ogrenci ogrenciler[n];
    for (i = 0; i < n; i++)
    {
        printf("%d. ogrencinin bilgileri:", i + 1);
        scanf("%s %s %d %d", ogrenciler[i].ad, ogrenciler[i].soyad, &ogrenciler[i].numara, &ogrenciler[i].kayit_yili);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d. ogrencinin bilgileri: %s %s %d %d\n", i + 1, ogrenciler[i].ad, ogrenciler[i].soyad, ogrenciler[i].numara, ogrenciler[i].kayit_yili);
    }

    return 0;
}