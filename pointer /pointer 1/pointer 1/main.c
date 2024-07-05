//
//  main.c
//  pointer 1
//
//  Created by Ecem Aydın on 18.02.2023.
// call by reference (adresle göndermek)

#include <stdio.h>

void degerdegistir(int *a,int *b)
{
    int gecici;
    gecici=*a;
    *a=*b;
    *b=gecici;
}

int main( )
{
    int x=5;
    int y=10;
    
    degerdegistir(&x,&y);
    
    printf("x=%dy=%d\n",x,y);
    
    return 0;
}
