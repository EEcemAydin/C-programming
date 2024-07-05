//
//  main.c
//  strin c prog 13.1
//
//  Created by Ecem Aydın on 7.04.2023.
//

#include <stdio.h>

int main()
{
    char karakter[255];
    printf("cümle giriniz:");
    fgets(karakter, 255, stdin);
    int i,sayac=0;
    for (i=0; karakter[i]!='\0'; i++)
    {
        sayac+=1;
    }
    int say=0;
    for (i=0; i<sayac; i++)
    {
        if(karakter[i]==' ')
        {
            say++;
        }
    }
    printf("girdiniz cümle %d kelimeden oluşmaktadır.\n",say+1);
    return 0;
}
