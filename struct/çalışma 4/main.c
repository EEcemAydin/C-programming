#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct zaman{
    int gun;
    int ay;
    int yil;
};
struct zaman zamanalma(int g,int a,int y)
{
    struct zaman t;
    if(g>31)
    {
        a+=g/31;
        if(g%31==0)
        {
            g=1;
        }
        else 
        {
            g=g%31;
        }
    }
    if(a>12)
    {
        y+=a/12;
        if(a%12==0)
        {
            a=1;
        }
        else 
        {
            a=a%12;
        }
    }
    t.gun=g;
    t.ay=a;
    t.yil=y;

  return t;  
}

int main()
{
    int gun,ay,yil;
    printf("gun ay yıl giriniz");
    scanf("%d %d %d",&gun,&ay,&yil);
    struct zaman dön;
    dön=zamanalma(gun,ay,yil);
    printf("gün:%d ay:%d yil:%d",dön.gun,dön.ay,dön.yil);
    

    return 0;
}