#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct ogrenci
{
    int og_no;
    char og_ad_soyad[50];
    float ort;
    int akts;
    int giris_yili;
};
struct ogrenci basariliogrencibul(struct ogrenci og1, struct ogrenci og2)
{
    if (og1.ort > og2.ort)
    {
        return og1;
    }
    else if (og1.ort == og2.ort)
    {
        if (og1.akts > og2.akts)
        {
            return og1;
        }
        else if (og1.akts == og2.akts)
        {
            if (og1.giris_yili < og2.giris_yili)
            {
                return og1;
            }
            else if (og1.giris_yili == og2.giris_yili)
            {
                int a = rand() % 2;
                if (a == 0)
                {
                    return og2;
                }
                else
                {
                    return og1;
                }
            }
            else
            {
                return og2;
            }
        }
        else
        {
            return og2;
        }
    }
    else
    {
        return og2;
    }
}
int main()
{
    srand(time(NULL));
    struct ogrenci og1;
    struct ogrenci og2;
    printf("birinci ogrenci bilgilerini giriniz:\n");
    printf("ogrenci numarası:");
    scanf("%d", &og1.og_no);
    printf("ogrenci adi soyadi:");
    fflush(stdin);
    fgets(og1.og_ad_soyad,50, stdin);
    printf("ortalama:");
    scanf("%f", &og1.ort);
    printf("akts:");
    scanf("%d", &og1.akts);
    printf("giris yili");
    scanf("%d", &og1.giris_yili);
    printf("ikinci ogrenci bilgilerini giriniz:\n");
    printf("ogrenci numarası:");
    scanf("%d", &og2.og_no);
    printf("ogrenci adi soyadi:");
    fflush(stdin);
    fgets(og2.og_ad_soyad, 50, stdin);
    printf("ortalama:");
    scanf("%f", &og2.ort);
    printf("akts:");
    scanf("%d", &og2.akts);
    printf("giris yili");
    scanf("%d", &og2.giris_yili);
    struct ogrenci yakalama = basariliogrencibul(og1, og2);
    printf("daha basarili ögrenci:");
    printf("ogrenci numarası: %d\n", yakalama.og_no);
    printf("ogrencinin adı soyadı: %s", yakalama.og_ad_soyad);
    return 0;
}