//
//  main.c
//  çalışma 3
//
//  Created by Ecem Aydın on 19.01.2023.
// CAN BOZ 3. BÖLÜM 99. SORU

#include <stdio.h>

int main() {
    int a,b,c;
    printf("a ve b basamak degerlerini giriniz:\n");
    scanf("%d%d",&a,&b);
    printf("%d%d",a,b);
    
    printf("\n");
    
    c=a;
    a=b;
    b=c;
    printf("%d%d",a,b);
    
    return 0;
}
