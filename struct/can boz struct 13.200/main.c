#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    struct ogrenci 
    {
        int okul_no;
        char cevap[11];
    };
    struct ogrenci veri[30];
    for (int  i = 0; i < 30; i++)
    {
        printf("%d. öğrencinin okul numarası:",i+1);
        scanf("%d",&veri[i].okul_no);
        printf("%d. öğrencinin cevapları:",i+1);
        scanf("%s",veri[i].cevap);
    }
    char cevap_anah[11];
    scanf("%s",cevap_anah);

    float net[30];
    int dogru;
    int yanlis;

    for ( int i = 0; i < 30; i++)
    {
        dogru=0,yanlis=0;
        for(int j=0;j<10;j++)
        {
            if(veri[i].cevap[j]==cevap_anah[j])
            {
                dogru++;
            }
            else 
            {
                yanlis++;
            }

    
        }
        net[i]=dogru-(dogru/4);

    }
    for (int i = 0; i < 30; i++)
    {
        printf("%d. ogrencinin okul numarası %d ve neti %f",i+1,veri[i].okul_no,net[i]);
    }
    
    
    
    

    return 0;
}