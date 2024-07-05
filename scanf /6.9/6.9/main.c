//
//  main.c
//  6.9
//
//  Created by Ecem Aydın on 16.10.2022.
//

#include <stdio.h>

int main() {
    printf("yaricap değeri giriniz\n");
    int r ;
    scanf("%d",&r);
    
    printf("merkez aci giriniz\n");
    int x;
    scanf("%d",&x);
    
    float alan;
    alan= (3.14*r*r)*(x/360.0);
    printf("%f\n",alan);
   
    return 0;
}
