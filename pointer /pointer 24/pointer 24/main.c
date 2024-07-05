//
//  main.c
//  pointer 24
//
//  Created by Ecem Aydın on 6.04.2023.
//

#include <stdio.h>
void sayiBul(float *dizi,float *ort,int *saykucuk,int *saybuyuk)
{
    float *ptr;
    float toplam=0;
    for (ptr=dizi; ptr<dizi+10; ptr++)
    {
        toplam=toplam+*ptr;
    }
    *ort=toplam/10;
    for (ptr=dizi; ptr<dizi+10; ptr++)
    {
        if(*ptr<*ort)
        {
            *saykucuk+=1;
        }
        else
        {
            *saybuyuk+=1;
        }
    }
}
int main()
{
    float dizi[10]={9.80,9.62,1.68,1.62,1.80,1.2,1.82,1.49,1.7,1.5};
    float ort;
    int saykucuk=0;
    int saybuyuk=0;
    sayiBul(dizi,&ort,&saykucuk,&saybuyuk);
    printf("ortalama=%.2f\nortalamadan buyuk eşit:%d\nortalamadan kucuk:%d\n",ort,saybuyuk,saykucuk);
    return 0;
}
