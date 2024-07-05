//
//  main.c
//  pointer 15
//
//  Created by Ecem Aydın on 27.03.2023.
//

#include <stdio.h>
void haftaGunSaatBul(int *süre,int *hafta,int *gün,int *saat)
{
    *hafta=*süre/168;
    *süre=*süre%168;
    *gün=*süre/24;
    *süre=*süre%24;
    *saat=*süre;
    
    
    
}
int main()
{
    int süre;
    int hafta,gün,saat;
    printf("saat cinsinden süre giriniz:");
    scanf("%d",&süre);
    
    haftaGunSaatBul(&süre,&hafta,&gün,&saat);
    printf("%d hafta,%d gün,%d saat",hafta,gün,saat);
    
    return 0;
}
