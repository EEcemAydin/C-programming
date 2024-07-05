//
//  main.c
//  çalışma 12
//
//  Created by Ecem Aydın on 21.01.2023.
//  CAN BOZ 6. BÖLÜM 132. SORU

#include <stdio.h>

int buyuk_sayi(int num1,int num2)
{
    if(num1>num2)
    {
        printf("%d sayisi %d sayisindan daha büyüktür",num1,num2);
        return 1;
    }
    else
    {
        printf("%d sayisi %d sayisindan büyük degildir.",num1,num2);
        return 0;
    }
    
    return 0;
}

int main()
{
    int num1,num2;
    printf("please enter two number.\n");
    scanf("%d%d",&num1,&num2);
    
    buyuk_sayi(num1,num2);
    
    
    return 0;
}
