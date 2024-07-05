//
//  main.c
//  pointer 2017 pointer 2.ö quiz
//
//  Created by Ecem Aydın on 3.04.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void kokbul(int a,int b,int c,int *x1,int *x2,int *delta)
{
    *delta=(b*b)-(4*a*c);
    if(*delta>0)
    {
        *x1=((-b)-sqrt(*delta))/(2*a);
        *x2=((-b)+sqrt(*delta))/(2*a);
    }
    else if(*delta<0)
    {
        printf("reel kök yoktur.");
    }
}
int main()
{
    int a,b,c;
    printf("denklemin katsayılarını giriniz:");
    scanf("%d%d%d",&a,&b,&c);
    int x1,x2,delta;
    kokbul(a,b,c,&x1,&x2,&delta);
    printf("x1:%d\n",x1);
    printf("x2:%d\n",x2);
    return 0;
}
