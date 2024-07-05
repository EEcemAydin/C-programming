//
//  main.c
//  çalışma 8
//
//  Created by Ecem Aydın on 20.01.2023.
// CAN BOZ 6. BÖLÜM SORU 127

#include <stdio.h>

int faktoriyel(int num)
{
    int i;
    int conclusion=1;
    for (i=1; i<=num; i++)
    {
        conclusion= conclusion*i;
        
    }
    return conclusion;
}



int main()
{
    int num;
    printf("please enter a number.\n");
    scanf("%d",&num);
    printf("%d!=%d",num,faktoriyel(num));
    return 0;
}
