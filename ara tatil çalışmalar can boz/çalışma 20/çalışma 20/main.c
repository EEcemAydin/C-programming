//
//  main.c
//  çalışma 20
//
//  Created by Ecem Aydın on 24.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void bölüm(int bölünen, int bölen)
{
    int bölüm;
    bölüm=bölünen/bölen;
    printf("bölüm deger:%d",bölüm);
}
void kalan(int bölünen,int bölen)
{
    int kalan;
    kalan=bölünen%bölen;
    printf("kalan degeri:%d",kalan);
}
int main()
{
    int bölünen,bölen;
    printf("lütfen bölünen ve bölen değeri giriniz\n");
    scanf("%d%d",&bölünen,&bölen);
    printf("bölünen:%d bölen:%d",bölünen,bölen);
    bölüm(bölünen,bölen);
    kalan(bölünen,bölen);
    return 0;
}


