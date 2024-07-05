//
//  main.c
//  çalışma 6
//
//  Created by Ecem Aydın on 19.01.2023.
// CAN BOZ 6. BÖLÜM 125. SORU

#include <stdio.h>

int toplam(int num1,int num2)
{
    int toplam = num1+num2;
    printf("toplam=%d",num1+num2);
    
    return num1+num2;
}


int main()
{
    int num1,num2;
    printf("lutfen iki sayi giriniz\n");
    scanf("%d%d",&num1,&num2);
    
    toplam(num1,num2);
    
    return 0;
}
