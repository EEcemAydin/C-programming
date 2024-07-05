#include <stdio.h>
#include <string.h>
#include <math.h>
int asal(int a)
{
    int i;

    for ( i = 2; i < a; i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char sayi[100][100];
    int i;
    //asal sayıları bulma
    for ( i = 1; i < 100; i++)
    {
       if(asal(i)&&i!=1)
       {
           sprintf(sayi[i],"|%3d(asal)|...^^...|%5.0f|..>>..|%10.4f|",i,pow(i,2),(float)pow(i,2));
       }
       else if(i%2==1)
       {
        sprintf(sayi[i],"|%3d(tek )|...//...|%5.0f|..>>..|%10.4f|",i,i/2,(float)(i/2));
       }
       else
       {
        sprintf(sayi[i],"|%3d(cift)|...><...|%5.0f|..>>..|%10.4f|",i,2*i,(float)(2*i));
       }
       
    }
    for ( i = 0; i <100; i++)
    {
        printf("%s\n",sayi[i]);
    }

    
    
    return 0;

}