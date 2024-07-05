//
//  main.c
//  pointer 3
//
//  Created by Ecem Aydın on 18.02.2023.
// string in pointer a uygulanması

#include <stdio.h>
#include <string.h>

int boyut(char *p)
{
    int uzunluk=0;
    int i;
    if(p[i]!=0)
    {
        for (i=0; i<uzunluk; i++)
        {
            uzunluk++;
        }
    }
    return uzunluk;
}



int main()
{
    char dizi[ ] ='tura';
    printf("%d",boyut(dizi));
    return 0;
}
