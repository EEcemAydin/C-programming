//
//  main.c
//  çalışma 7
//
//  Created by Ecem Aydın on 20.01.2023.
// CAN BOZ 6. BÖLÜM 126. SORU

#include <stdio.h>


float transaction_op(int num1,int num2,char process)
{
    if(process=='+')
    {
        return num1+num2;
    }
    else if (process=='-')
    {
        return num1-num2;
    }
    else if (process=='*')
    {
        return num1*num2;
    }
    else if(process=='/')
    {
        return num1/num2;
    }
    else
    {
        printf("you made the wrong choice.");
    }
    return 0;
}

int main()
{
    char process;
    printf("please select process type.\n ");
    scanf("%c",&process);
    printf("%c",process);
    
    int num1;
    int num2;
    printf("please enter two numbers.\n");
    scanf("%d%d",&num1,&num2);
    
    printf("total=%2.f",transaction_op(num1,num2,process));
    return 0;
}
