#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct ürün
{
    char isim[15];
    int barkod_no;
    int adet;
};
void ürünyazdırma(struct ürün veri[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("isim:%10s barkod:%4d", veri[i].isim, veri[i].barkod_no);
    }
}
void ürüncıkarma(struct ürün veri[])
{
    int cıkarılacagınbarkodu;
    printf("cıkarmak istediğiniz ürünün barkod numarasını giriniz:");
    scanf("%d", &cıkarılacagınbarkodu);
    int cıkarılacakadet;
    printf("cıkarlıcak adeti giriniz");
    scanf("%d", &cıkarılacakadet);
    int i;
    for (i = 0; i < 5; i++)
    {
        if (cıkarılacagınbarkodu == veri[i].barkod_no)
        {
            veri[i].adet = veri[i].adet - cıkarılacakadet;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%10s isimli %4d barkodlu üründen %4d adet var.", veri[i].isim, veri[i].barkod_no, veri[i].adet);
    }
}
void ürünekleme(struct ürün veri[])
{
    int ekleneninbarkodu;
    printf("eklemek istediğiniz ürünün barkod numarasını giriniz:(4 haneli)");
    scanf("%d", &ekleneninbarkodu);
    int eklenilecekadet;
    printf("eklenilecek adeti giriniz");
    scanf("%d", &eklenilecekadet);
    int i;
    for (i = 0; i < 5; i++)
    {
        if (ekleneninbarkodu == veri[i].barkod_no)
        {
            veri[i].adet = veri[i].adet + eklenilecekadet;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%10s isimli %4d barkodlu üründen %4d adet var.", veri[i].isim, veri[i].barkod_no, veri[i].adet);
    }
}
int main()
{
    struct ürün veri[5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("%d. ürünün adını ve barkod numarasını giriniz:", i + 1);
        scanf("%s %d", veri[i].isim, &veri[i].barkod_no);
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (veri[i].barkod_no == veri[j].barkod_no)
            {
                veri[i].adet++;
            }
        }
    }
    int islem = 1;

    while (islem != 0)
    {
        printf("hangi islemi yapmak istersiniz(1e basarsanız ürün eklersiniz 2 ye basarsanız ürün çıkarırsınız 3 e basarsanız ürünleri ve barkod numaralarını yazdırırsınız)");
        scanf("%d", &islem);
        if (islem == 1)
        {
            ürünekleme(veri);
        }
        if (islem == 2)
        {
            ürüncıkarma(veri);
        }
        if (islem == 3)
        {
            ürünyazdırma(veri);
        }
    }

    return 0;
}