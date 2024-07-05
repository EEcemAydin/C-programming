//
//  main.c
//  pointer 21
//
//  Created by Ecem Aydın on 1.04.2023.
// c prog 12.11

#include <stdio.h>
void ziynetSayisiBul(float *para,float *tamaltın,int *tamsay,int *yarımsay,int *ceyreksay)
{
    float yarımtl,ceyrektl;
    yarımtl=*tamaltın/2;
    ceyrektl=*tamaltın/4;
    *tamsay=*para / *tamaltın;
    *para= *para-(*tamsay**tamaltın);
    *yarımsay=*para/yarımtl;
    *para= *para-(*yarımsay*yarımtl);
    *ceyreksay=*para/ ceyrektl;
    *para= *para-(*ceyreksay*ceyrektl);
}
int main()
{
    float para;
    printf("para miktarını giriniz:\n");
    scanf("%f",&para);
    float tamaltın;
    printf("tam ziynet altının satis degerini giriiniz:\n");
    scanf("%f",&tamaltın);
    int tamsay,yarımsay,ceyreksay;
    ziynetSayisiBul(&para,&tamaltın,&tamsay,&yarımsay,&ceyreksay);
    printf("elinizdeki para ile %d tam altın,%d yarım altın,%d ceyrek altın alabilirsiniz.\n",tamsay,yarımsay,ceyreksay);
    printf("kalan paranız %.2f tl dir",para);
    return 0;
}
