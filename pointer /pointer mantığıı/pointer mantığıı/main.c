//
//  main.c
//  pointer mantığıı
//
//  Created by Ecem Aydın on 17.02.2023.
//

#include <stdio.h>
/*
int main( )
{
    int i=10;
    int *p=&i;
    printf("%p\n",p);
    printf("%d",*p);
    return 0;
}
// & değişkenin adres bilgisini veriyo
// * adresteki değeri verir
*/

int main ( )
{
    int i;
    int j=1;
    int *jp1;
    int *jp2;
    
    *jp2 = &j;
    *jp1 = *jp2;
    i =  i+(*jp2);
    *jp2 = i+jp1;
    printf("i=%d,j=%d,*jp1=%d,*jp2=%d",i,j,*jp1,*jp2);
    
    
    return 0;
}
