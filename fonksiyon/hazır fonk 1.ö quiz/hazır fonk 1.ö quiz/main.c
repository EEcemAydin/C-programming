//
//  main.c
//  hazır fonk 1.ö quiz
//
//  Created by Ecem Aydın on 5.12.2022.
//

#include <stdio.h>
#include <math.h>

int fact(int x)
{
    int fact=1;
    int i;
    for(i=1;i<=x;i++)
    {
        fact=i*fact;
    }
    return fact;
}

float sumfunc(float x,float n)
{
    float sonuc=0.0;
    float enson;
    int i;
    for(i=2;i<=2*n-1;i++)
    {
        sonuc=(pow(x,i)/fact(2*i-1))+sonuc;
    }
    enson= x+sonuc;
    return enson;
}


int main()
{
    int x;
    int n;
    printf("lutfen x degeri giriniz:\n");
    scanf("%d",&x);
    printf("lutfen n degeri giriniz:\n");
    scanf("%d",&n);
    fact(x);
    sumfunc(x,n);
    printf("sonuc:%f",sumfunc(x,n));
   
    return 0;
}
