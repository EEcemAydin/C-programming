#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
int f(char *p)
{
    int a=atoi(p);
    return a;
}
int main()
{
    char strdizi[5][50]="1.sayiyimiz 24.25 2. say 45";
    int sayac=0;
    for (int i = 0; i < strlen(str); i++)

    {
       int sonuc=f(str+i) ;
       if (sonuc!=0)
       {
        sayac++;

       }
       
    }
    printf("%d",sayac);
    

    
    return 0;
}