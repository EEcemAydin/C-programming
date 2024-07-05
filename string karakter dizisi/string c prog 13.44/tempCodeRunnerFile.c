#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
int stoi(char dizgi[])
{
    char sayi[15];
    char copy[1];
    int i, a;
    for (i = 0; dizgi[i] != '\0'; i++)
    {
        if (48 <= dizgi[i] && dizgi[i] <= 57)
        {
            copy[0] = dizgi[i];
            strcat(sayi, copy);
        }
        else
        {
            break;
        }
    }
    a = atoi(sayi);
    return a;
}
int main()
{
    int döndürme;
    char dizgi[15];
    printf("sayısal içerikli dizgi:");
    fgets(dizgi, 15, stdin);
    döndürme = stoi(dizgi);
    printf("%d", döndürme);
    return 0;
}