//
//  main.c
//  6.13
//
//  Created by Ecem Aydın on 16.10.2022.
//

#include <stdio.h>

int main() {
    printf("lutfen cm cinsinden bir uzunluk giriniz\n");
    float inc;
    scanf("%f",&inc);
    
    float mm;
    mm= 25.4*inc;
    printf("%f",mm);
    
    float cm;
    cm=2.54*inc;
    printf("%f",cm);
    

    return 0;
}
