//
//  main.c
//  çalışma 9
//
//  Created by Ecem Aydın on 20.01.2023.
// CAN BOZ 6. BÖLÜM 128. SORU

#include <stdio.h>
#include <math.h>

int us(int num1,int num2)
{
    int conclusion;
    conclusion=pow(num1,num2);
    return 0;
}

int main()
{
    int num1,num2;
    printf("please enter two number.\n");
    scanf("%d%d",&num1,&num2);
    printf("%d",us(num1,num2));
    
    return 0;
}
