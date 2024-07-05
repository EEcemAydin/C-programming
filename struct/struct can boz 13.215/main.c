#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct müsteri
{
    char isim[15];
    char soyisim[15];
    int kahvaltı;
    int akşamyemegi;
    int otel_hizmeti;
    int tek_ark;
};
void ücret(struct müsteri bilgi[], int kahvaltıyapılangün, int oteldekalınangün)
{
    int ücret;
    for (int i = 0; i < 5; i++)
    {
        if (bilgi[i].otel_hizmeti == 0)
        {
            if (bilgi[i].kahvaltı == 1)
            {
                if (bilgi[i].tek_ark == 0)
                {
                    ücret = (75 * oteldekalınangün) + (15 * kahvaltıyapılangün);
                }
                else if (bilgi[i].tek_ark == 1)
                {
                    ücret = (75 * oteldekalınangün) + (15 * 2 * kahvaltıyapılangün);
                }
            }
        }
    }
    printf("müsterinin ödeyeceği ücret=%d",ücret);
}

void kahvaltıcısayısı(struct müsteri bilgi[])
{
    int kahvaltıyapılangün;
    int oteldekalınangün;
    for (int i = 0; i < 5; i++)
    {
        if (bilgi[i].otel_hizmeti == 0)
        {
            if (bilgi[i].kahvaltı == 1)
            {
                printf("otelde kaç gün kaldı?");
                scanf("%d", &oteldekalınangün);
                printf("kaç gün sabah kahvaltısı yaptı?");
                scanf("%d", &kahvaltıyapılangün);
            }
        }
    }

    ücret(bilgi, kahvaltıyapılangün, oteldekalınangün);
}
int main()
{
    struct müsteri bilgi[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d . müsterinin adı soyadını giriniz:", i + 1);
        scanf("%s %s", bilgi[i].isim, bilgi[i].soyisim);
        printf("%d . müsterinin kahvaltı seçimi(0-1):", i + 1);
        printf("istemiyorsa 0,istiyorsa 1 seçiniz:");
        scanf("%d", &bilgi[i].kahvaltı);
        printf("%d . müsterinin akşam yemeği seçimi(0-1):", i + 1);
        printf("istemiyorsa 0,istiyorsa 1 seçiniz:");
        scanf("%d", &bilgi[i].akşamyemegi);
         printf("%d . müsterinin otel hizmeti seçimi(0-1):", i + 1);
        printf("2* otelse 0,3* otelse 1 seçiniz:");
        scanf("%d", &bilgi[i].otel_hizmeti);
         printf("%d . müsterinin tek veya arkadaşlarıyla kalma seçimi(0-1):", i + 1);
        printf("tek kalacaksa 0,arkadaşlarıyla kalacaksa 1 seçiniz:");
        scanf("%d", &bilgi[i].tek_ark);
        
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("%d. kişinin bilgileri ve tercihleri:%10s %10s %3d %3d %3d %3d\n", i + 1, bilgi[i].isim, bilgi[i].soyisim, bilgi[i].akşamyemegi, bilgi[i].otel_hizmeti, bilgi[i].tek_ark);
    }
    // 2* seçenler
    printf("iki yıldızlı otel hizmeti seçenler\n");
    for (i = 0; i < 5; i++)
    {
        if (bilgi[i].otel_hizmeti == 0)
        {
            printf("%s %s", bilgi[i].isim, bilgi[i].soyisim);
        }
    }
    kahvaltıcısayısı(bilgi);

    return 0;
}