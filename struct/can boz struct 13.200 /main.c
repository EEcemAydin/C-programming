#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct bilgi
{
   char ad[20];
   char soyad[20];
   float perf_no[10];
};
float perfnohesap(struct bilgi yarismaci)
{
    int i,j,gecici;
    for ( i = 0; i < 10; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if(yarismaci.perf_no[i]>yarismaci.perf_no[j])
            {
                gecici=yarismaci.perf_no[i];
                yarismaci.perf_no[i]=yarismaci.perf_no[j];
                yarismaci.perf_no[j]=gecici;
            }
        }
        
    }
    float ort=(yarismaci.perf_no[1]+yarismaci.perf_no[2]+yarismaci.perf_no[3]+yarismaci.perf_no[4]+yarismaci.perf_no[5]+yarismaci.perf_no[6]+yarismaci.perf_no[7]+yarismaci.perf_no[8])/8;
    printf("performans puanı:%.2f",ort);
    
}
int main()
{
    struct bilgi yarismaci;
    printf("yarışmacinin adini giriniz:");
    scanf("%s",yarismaci.ad);
    printf("yarismacinin soyadini giriniz:");
    scanf("%s",yarismaci.soyad);
    printf("puan:");
    int i;
    for ( i = 0; i < 10; i++)
    {
        scanf("%f",&yarismaci.perf_no[i]);
    }
    perfnohesap(yarismaci);


    
    return 0;
}