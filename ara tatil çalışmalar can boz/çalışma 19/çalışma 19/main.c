//
//  main.c
//  çalışma 19
//
//  Created by Ecem Aydın on 24.01.2023.
// CAN BOZ 6. BÖLÜM 143. SORU

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void yerdegistirme(int x,int y)
{
    int a;
    a = x;
    x = y;
    y = a;
    
    printf("x:%d y:%d\n",x,y);
    
}

int main()
{
    int x,y;
    printf("lutfen iki sayi giriniz.\n");
    scanf("%d%d",&x,&y);
    printf("x:%d y:%d\n",x,y);
    
    yerdegistirme(x,y);
    return 0;
}
