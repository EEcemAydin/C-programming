#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
/*
int tirnakarama(char str[])
{
    int i;
    for ( i = 0; i < str[i]!='\0'; i++)
    {
        if (str[i]=='"')
        {
            return i;
            break;
        }
    }
   return 0; 
}
int alinti(char *str,char *alintidizisi)
{
    int x,a;
    a=tirnakarama(str,alintidizisi);
    if(a==0)
    {
        return 0;
    }
    else
    {
        for ( x = 0; x < str[x]!='\0'; x++)
        {
            if (str[x]=='"')
            {
                x++;
                break;
            }
        }
        int i;
        for ( i = 0; str[x]!='"'; i++)
        {
            alintidizisi[i]=str[x];
            x++;
        }
        alintidizisi[i]='\0';
        return 1;
    }

}
int main()
{
    char str[100];
    printf("cümle giriniz: ");
    fgets(str, 100, stdin);
    int x;
    char alintidizisi[100];
    x= alinti(str,alintidizisi);
    if(x==0)
    {
        printf("alinti yok");
    }
    else
    {
        printf("alinti: %s",alintidizisi);
    }
    return 0;
}
*\