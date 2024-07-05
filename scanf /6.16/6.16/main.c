//
//  main.c
//  6.16
//
//  Created by Ecem Aydın on 16.10.2022.
//

#include <stdio.h>

int main() {
    
    printf("lutfen birinci degeri giriniz\n");
    int a;
    scanf("%d",&a);
    
    printf ("lutfen ikinci degeri giriniz\n");
    int b;
    scanf("%d",&b);
    
    int harmonik_ortalama;
    harmonik_ortalama = (2*a*b)/(a+b);
    printf("%d\n",harmonik_ortalama);
  

    
    return 0;
}
