//
//  main.c
//  fonk prototifi
//
//  Created by Ecem Aydın on 3.12.2022.
//

#include <stdio.h>

int min(int a,int b);
int max(int a,int b);

int main()
{
    int a;
    int b;
    printf("lutfen iki sayi giriniz:\n");
    scanf("%d %d",&a,&b);
    printf("sayilardan kucuk olan:%d\n",min(a,b));
    printf("sayilardan buyuk olan:%d\n",max(a,b));
    
    return 0;
}

int max(int a> int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int min (int a < int b)
{
    if(a<b)
        return a;
    else
        return b;
}
