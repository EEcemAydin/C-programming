#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    struct zaman
    {
        int saat;
        int dakika;
        int saniye;
    };
    struct zaman zaman1, zaman2;
    zaman1.saat=10;
    zaman1.dakika=20;
    zaman1.saniye=30;
    zaman2.saat=11;
    zaman2.dakika=21;
    zaman2.saniye=31;
    printf("zaman1: %d:%d:%d\n",zaman1.saat,zaman1.dakika,zaman1.saniye);
    printf("zaman2: %d:%d:%d\n",zaman2.saat,zaman2.dakika,zaman2.saniye);
    struct zaman toplam;
    toplam.saat=zaman1.saat+zaman2.saat;
    toplam.dakika=zaman1.dakika+zaman2.dakika;
    toplam.saniye=zaman1.saniye+zaman2.saniye;
    if(toplam.saniye>=60)
    {
        toplam.saniye-=60;
        toplam.dakika++;
    }
    if(toplam.dakika>=60)
    {
        toplam.dakika-=60;
        toplam.saat++;
    }
    printf("toplam: %d:%d:%d\n",toplam.saat,toplam.dakika,toplam.saniye);
    

    return 0;
}