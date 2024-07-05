//
//  main.c
//  string c prog 13.7
//
//  Created by Ecem Aydın on 8.04.2023.
//

#include <stdio.h>

int main()
{
    char palindrom[100];
    printf("dizgiyi giriniz:");
    fgets(palindrom, 100, stdin);
    int i, sayac = 0;
    for (i = 0; palindrom[i] != '\0'; i++)
    {
        sayac++;
    }
    char control = ' ';
    for (i = 0; i < sayac / 2; i++)
    {
        if (palindrom[i] == palindrom[sayac - i - 2])
        {
            control = 'd';
        }
        else
        {
            control = 'y';
        }
    }
    if (control == 'd')
    {
        printf("palindrom sayıdır.\n");
    }

    else if (control == 'y')
    {
        printf("palindrom sayı değildir.\n");
    }
    return 0;
}
