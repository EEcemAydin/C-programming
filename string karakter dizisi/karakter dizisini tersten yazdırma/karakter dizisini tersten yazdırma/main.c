//
//  main.c
//  karakter dizisini tersten yazdırma
//
//  Created by Ecem Aydın on 7.04.2023.
//

#include <stdio.h>

int main()
{
    char arr[100];
    printf("kelime giriniz:\n");
    scanf("%s",arr);
    int i;
    int sayac=0;
    for (i=0; arr[i]!='\0'; i++)
    {
        sayac+=1;
    }
    printf("%d\n",sayac);
    for (i=sayac; i>0; i--)
    {
        printf("%c",arr[i-1]);
    }
    return 0;
}
