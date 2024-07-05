//
//  main.c
//  diziler udemy 2
//
//  Created by Ecem Aydın on 12.12.2022.
//dizilerde yeni eleman atama

#include <stdio.h>

int main()
{
    short atama[10]={1,2,6,10,11,4,8,0,6,8};
    int i;
    
    atama[2]=100;
    atama[5]=99;
    
    for(i=0;i<10;i++)
    {
        printf("%d ",atama[i]);
    }
    
    return 0;
}
