//
//  main.c
//  if else 2019
//
//  Created by Ecem Aydın on 21.10.2022.
//

#include <stdio.h>

int main() {
    printf("lutfen boyunuzu ve kilonuzu giriniz\n");
    int kutle;
    int boy;
    scanf("%d%d",&kutle,&boy);
    
    int a;
    a=kutle/(boy*boy);
    
    if(0<a && a <18.4)
    {
        printf("ideal kilonuzun altindasiniz\n");
    }
    
    else if(18.5 <a && a <24.9)
    {
        printf("kilonuz tamamen normal\n");
    }
    
    else
    {
        printf("ideal kilonuzun ustundesiniz\n");
    }
    return 0;
}
