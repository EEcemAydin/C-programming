//
//  main.c
//  pointer 4
//
//  Created by Ecem Aydın on 18.02.2023.
// sayı karakter ve adreslerini bastırma

#include <stdio.h>

int main()
{
    int tamsayi=2;
    char karakter='A';
    float floatlısayi=6.2;
    double sayiim=4.22222;
    
    printf("sayim:%d adresi:%d\n",tamsayi,&tamsayi);
    printf("karakter:%c adresi:%d\n",karakter,&karakter);
    printf("float sayim:%f adresi:%d\n",floatlısayi,&floatlısayi);
    printf("double sayim:%lf adresi:%d",sayiim,&sayiim);
    
    return 0;
}
