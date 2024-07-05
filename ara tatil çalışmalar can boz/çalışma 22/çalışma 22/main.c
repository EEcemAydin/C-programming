//
//  main.c
//  çalışma 22
//
//  Created by Ecem Aydın on 26.01.2023.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void zamanbul(int saniye)
{
    int saat;
    int dakika;
    int artan;
    saat=saniye/3600;
    artan=saniye%3600;
    dakika=artan/60;
    saniye=dakika%60;
    printf("hh:%dmm:%dss:%d",saat,dakika,saniye);
}


int main()
{
    int saniye;
    printf("lütfen saniye degeri giriniz:\n");
    scanf("%d",&saniye);
    zamanbul(saniye);

    return 0;
}
