//
//  main.c
//  if esad ödev
//
//  Created by Ecem Aydın on 16.10.2022.
//

#include <stdio.h>

int main() {
    float vize;
    float final;
    float ort;
    char harf;
    
    printf("lutfen bir vize notu giriniz\n");
    scanf("%f",&vize);
    
    printf("lutfen bir final notu giriniz\n");
    scanf("%f",&final);
    
    ort=(0.4*vize)+(0.6*final);
    printf("%f",ort);
    
    if(ort<50)
    harf= 'F';
    
    else if (ort<60)
    harf='E';
    
    else if (ort <70)
    harf='D';
    
    else 
    harf='A';
    
    
    return 0;
}
