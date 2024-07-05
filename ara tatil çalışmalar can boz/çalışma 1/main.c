//
//  main.c
//  çalışma 1
//
//  Created by Ecem Aydın on 18.01.2023.
// CAN BOZ 3. BÖLÜM 84. VİDEO SORU ÇZÖÜMÜ

#include <stdio.h>

int main() {
    int a,b,c,x;
    printf("lutfen degerleri giriniz:\n");
    scanf("%d%d%d%d",&a,&b,&c,&x);
    
    int sonuc;
    sonuc=(a*x*x)+(b*x)+c;
    printf("sonuc:%d",sonuc);
    
    return 0;
}
