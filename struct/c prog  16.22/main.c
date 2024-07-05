#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct şube
{
    char isim[20];
    int ogrencisay;
    int kntj;

};
struct şube subeUret (char isim[],int kntj,int ogrencisay)
{
    struct şube returna;
    if(ogrencisay>kntj)
    {
        strcpy(returna.isim,"EK");
        returna.kntj=kntj;;
        returna.ogrencisay=ogrencisay-kntj;
    }
    return returna;
}
int main()
{
    char isim[20];
    int ogrencisay;
    int kntj;
    struct şube returna;
    printf("şubenin isim,konteyjan ve ogrenci sayisini giriniz:");
    scanf("%s %d %d",isim,&kntj,&ogrencisay);
    subeUret(isim,kntj,ogrencisay);
    

    return 0;
}