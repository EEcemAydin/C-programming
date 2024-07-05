#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h> 
void fyazdir(char isim[])
{
    int i,j,m;
    m=strlen(isim);
    for ( i = 1; i < m; i++)
    {
        for ( j = 0; j < i ; j++)
        {
            printf("%c",isim[j]);
        }
        printf("\n");
    }
        
    
    
}
int main() 
{
    char isim [15];
    printf("isim giriniz:");
    fgets(isim,15,stdin);
    printf("************\n");
    fyazdir(isim);
    return 0;
}  