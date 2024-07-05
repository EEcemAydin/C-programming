//
//  main.c
//  6.14
//
//  Created by Ecem Aydın on 16.10.2022.
//

#include <stdio.h>

int main() {
    printf("lutfen sıcaklık giriniz\n");
    float oC;
    scanf("%f",&oC);
   
    float F;
    F= ((180*oC)/100) +32;
    printf("%f",F);
    
    
    return 0;
}
