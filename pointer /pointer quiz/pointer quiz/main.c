
// 220202020 ELİF ECEM AYDIN

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void usbasamakhesaplama(float T,int *p,int *u,int *b)
{
    int sayac = 0;
    int carpilmis = T * 10;
    int temp;
    while (carpilmis % 10 != 0)
    {
        T = T * 10;
        carpilmis = T;
        sayac += 1;
    }
    *p = carpilmis / 10;
    *u = sayac - 1;
    temp = *p;
    while (temp > 0)
    {
        temp = temp / 10;
        *b += 1;
    }
    *u=0-*u;

   while(T>0)
  {
      T=T/10;
      *b+=1;
  }
    
}
int main()
{
    float T;
    printf("T ondalıklı sayısı giriniz.");
    scanf("%f",&T);
    int p=0,u=0,b=0;
    usbasamakhesaplama(T,&p,&u,&b);
    printf("tamsayı=%d\nus=%d\nbasamak=%d\n",p,u,b);
    return 0;
}
