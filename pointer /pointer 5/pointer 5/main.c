//
//  main.c
//  pointer 5
//
//  Created by Ecem Aydın on 20.02.2023.
//

#include <stdio.h>

int main ( ){
    int sayi1;
    int sayi2;
    int *a;
    int *b;
    int toplam;
    
    a=&sayi1;
    b=&sayi2;
    printf("lutfen iki sayi giriniz:\n");
    scanf("%d%d",a,b);
    toplam= *a + *b;
    printf("toplam=%d\n",toplam);
    
    
    return 0;
}
