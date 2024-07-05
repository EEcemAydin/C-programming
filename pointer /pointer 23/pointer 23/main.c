//
//  main.c
//  pointer 23
//
//  Created by Ecem Aydın on 5.04.2023.
//

#include <stdio.h>
void seriNoCoz(int seri,char *blok,int *daire,int *arac)
{
    *arac=seri%10;
    seri=seri/10;
    *daire=seri%100;
    seri=seri/100;
    if(seri==1)
    {
        *blok='A';
    }
    else if(seri==2)
    {
        *blok='B';
    }
    else if(seri==3)
    {
        *blok='C';
    }
    else
    {
        printf("hatalı blok numarası girdiniz.");
    }
    
}
int main()
{
    int seri;
    printf("arac tanıtım kartının seri numarasını giriniz(4haneli):\n");
    scanf("%d",&seri);
    int daire,arac;
    char blok;
    seriNoCoz(seri,&blok,&daire,&arac);
    printf("bu arac %c blokta %d nolu dairenin %d.aracıdır.\n",blok,daire,arac);
}
