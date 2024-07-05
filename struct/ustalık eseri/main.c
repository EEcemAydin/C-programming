#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct musteri
{
    char isim[15];
    char soyisim[15];
    int kahvalti;    // 0 sa yok 1 se 15 euro
    int aksamyemegi; // 0 yok 1 se 35 euro
    int otelservisi; // 0 yok 1 * 75 euro 2 ** 100 euro
    int arkadas;     // 0 yok 1 var yemekler *2
};
void verileriyazdir(struct musteri veri[], int n)
{
    printf("veriler");
    for (int i = 0; i < n; i++)
    {
        printf("----------------------------------------------------------\n");
        printf("||isim||soyisim||kahvalti||aksam yemegi||otel servisi||kalma durumu||");
        printf("----------------------------------------------------------\n");
        printf("||%10s||%10s||%4d||%4d||%4d||%4d||%4d||\n", veri[i].isim, veri[i].soyisim, veri[i].kahvalti, veri[i].aksamyemegi, veri[i].otelservisi, veri[i].arkadas);
    }
}
void ucretbul(struct musteri veri, int n)
{
    int ucret = 0;
    if (veri.otelservisi == 1)
    {
        ucret = ucret + 75;
    }
    else if (veri.otelservisi == 2)
    {
        ucret = ucret + 100;
    }
    if (veri.arkadas)
    {
        if (veri.kahvalti)
        {
            ucret = ucret + 30;
        }
        if (veri.aksamyemegi)
        {
            ucret = ucret + 70;
        }
    }
    else
    {
        if (veri.kahvalti)
        {
            ucret = ucret + 15;
        }
        if (veri.aksamyemegi)
        {
            ucret = ucret + 35;
        }
    }
}
void kisibul(struct musteri veri[], int n)
{
    char k_isim[15];
    char k_soyisim[15];
    strcpy(k_isim, "");
    strcpy(k_soyisim, "");
    printf("kullanicidan isim soyisim giriniz:");
    scanf("%s %s", k_isim, k_soyisim);
    for (int i = 0; i < n; i++)
    {
        int x = strcmp(k_isim, veri[i].isim);
        int y = strcmp(k_soyisim, veri[i].isim);
        if (x == 0 && y == 0)
        {
            ucretbul(veri[i], n);
        }
    }
}
int kahvaltiyapcakkisisayisi(struct musteri veri[], int n)
{
    int kah_kisi = 0;
    for (int i = 0; i < n; i++)
    {
        if (veri[i].kahvalti == 1)
        {
            kah_kisi++;
        }
    }
    return kah_kisi;
}
int aksamyicekkisisayisi(struct musteri veri[], int n)
{
    int aksamyemegi_say = 0;
    for (int i = 0; i < n; i++)
    {
        if (veri[i].aksamyemegi == 1)
        {
            aksamyemegi_say++;
        }
    }
    return aksamyemegi_say;
}

int main()
{
    int turdaki_kisi_sayisi, n;
    printf("tura kac kisi katilacak:");
    scanf("%d", &turdaki_kisi_sayisi);
    n = turdaki_kisi_sayisi;
    struct musteri veri[n];
    int i;
    for (i = 0; i < n; i++)
    {
        strcpy(veri[i].isim, "");
        strcpy(veri[i].soyisim, "");
        printf("%d.kisinin adi soyadini giriniz:", i + 1);
        scanf("%s %s", veri[i].isim, veri[i].soyisim);
        printf("%d.kisinin kahvalti secimini giriniz(0 yok/1 var):", i + 1);
        scanf("%d", &veri[i].kahvalti);
        printf("%d.kisinin aksam yemegi secimini giriniz(0 yok/1 var):", i + 1);
        scanf("%d", &veri[i].aksamyemegi);
        printf("%d.kisinin otel hizmeti secimini giriniz(0 yok/1 iki yildiz/2 uc yildiz):", i + 1);
        scanf("%d", &veri[i].otelservisi);
        printf("%d.kisinin odasindaki kisi secimini giriniz(0 tek/1 arkadasiyla):", i + 1);
        scanf("%d", &veri[i].arkadas);
    }
    int a = kahvaltiyapcakkisisayisi(veri, n);
    printf("kahvalti yapan kisi sayisi:");
    printf("%d", a);
    printf("\n");

    int b = aksamyicekkisisayisi(veri, n);
    printf("aksam yicek kisi sayisi:");
    printf("%d", b);
    printf("\n");

    int islem;
    printf("hangi islemi yapmak istersiniz 1se ücret hesapla,2 se kisinin bütün tercihleri yazdir,0 sa uygulamayi btir.");
    scanf("%d", &islem);
    while (islem != 0)
    {
        if (islem == 1)
        {
            kisibul(veri, n);
        }
        if (islem == 2)
        {
            verileriyazdir(veri, n);
        }
        printf("isleme devam etmek istiyorsaniz 1 istemiyorsaniz 0 giriniz:");
        scanf("%d", &islem);
    }

    return 0;
}