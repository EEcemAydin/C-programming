#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
/*
 void FrekansHesapla(int top_kelime_sayisi[],char birlesikmetindizisi[])
 {
    float kelimenin_frekansi;
    //amacım bir kelimenin cümlede kaç kere geçtiğini bulmak.her seferinde sayacı sıfırlamalıyım.
    char birlesikmetindizisi[200][200]; 
    int aynıkelimekacdefa[100]; 
    int i, j, n, karsilastir;
    int esolan;
    for(i=0; i<n; i++)
    {
        aynıkelimekacdefa[i] = 1; 
    }

    
    for(i=0; i<n; i++)
    {
        karsilastir = strlen(birlesikmetindizisi[i]);
        esolan = 0; 
        for(j=i+1; j<n; j++)
        {
            if(strlen(birlesikmetindizisi[j]) == karsilastir && strcmp(birlesikmetindizisi[i], birlesikmetindizisi[j]) == 0)
            {
                esolan++;
                aynıkelimekacdefa[i]++;
            }
        }
        if(esolan > 0) 
        {
            aynıkelimekacdefa[i] = aynıkelimekacdefa[i]+esolan;
        }
    }


}


int Kelimebul(char birlesikmetindizisi[])
{
    //birleştirdiğim diziyi kelime kelime ayırdım.
    int i,j,k;
    char kelime[100];
    for (i = 0; i < birlesikmetindizisi[i]!='\0'; i++)
    {
        if (birlesikmetindizisi[i]==' ')
        {
            for (j = 0; j < i; j++)
            {
                kelime[j]=birlesikmetindizisi[j];
            }
            kelime[j]='\0';
            printf("%s\n",kelime);
            for (k = 0; k < i; k++)
            {
                birlesikmetindizisi[k]=birlesikmetindizisi[k+i+1];
            }
            i=0;
        }

    }
    
     //farklı kelimeleri bulmaya calıştım.aynı kelimeleri bulup saydırmak için bir diziye atıp saydırmayı düşündüm toplam kelime sayısından çıkaracağım.
     int top_kelime_sayisi=0;
     top_kelime_sayisi=strlen(birlesikmetindizisi);

     int ayni_kelime_sayisi=0;
        char ayni_kelime_dizisi[100];
        for (i = 0; i < top_kelime_sayisi; i++)
        {
            for (j = 0; j < top_kelime_sayisi; j++)
            {
                if (birlesikmetindizisi[i]==birlesikmetindizisi[j])
                {
                    ayni_kelime_dizisi[i]=birlesikmetindizisi[i];
                    ayni_kelime_sayisi++;
                }
            }
            
        }
        int farkli_kelime_sayisi;
        farkli_kelime_sayisi=top_kelime_sayisi-ayni_kelime_sayisi;
        FrekansHesapla(top_kelime_sayisi,birlesikmetindizisi);
     
     
return 0;

}
void birlestir(char isaretsizmetindizisi1[],char isaretsizmetindizisi2[])
{
    //atadığım iki diziyi birleştirdim.
    int i,k;
    char birlesikmetindizisi[200];
    for(i=0; i<isaretsizmetindizisi1; i++)
    {
        birlesikmetindizisi[i] = isaretsizmetindizisi1[i];
    }
    
    k = i;
    for(i=0; i<isaretsizmetindizisi2; i++)
    {
        
        birlesikmetindizisi[k] = isaretsizmetindizisi2[i];
        k++;
    }
    KelimeBul(birlesikmetindizisi);

}

void temizlemefonk(char metindizisi[])
{
    //sadece asci aralıklarına uyan karakterleri aldım küçükleri bir diziye büyükleri 32 ekleyerek bir diziye atadım.
    int i;
    char isaretsizmetindizisi1[100];
    char isaretsizmetindizisi2[100];
    for (i = 0; i < metindizisi[i] != '\0'; i++)
    {
        if (65<=metindizisi[i] && metindizisi[i]<=90)
        {
           metindizisi[i]=metindizisi[i]+32;
           isaretsizmetindizisi1[i]=metindizisi[i];
        }
        if(97<=metindizisi[i] && metindizisi[i]<=122)
        {
            isaretsizmetindizisi2[i]=metindizisi[i];
        }
        birlestir(isaretsizmetindizisi1,isaretsizmetindizisi2);  
    }
  
}
int main()
{
    char metindizisi[100];
    printf("kelime:");
    fgets(metindizisi, 100, stdin);
    temizlemefonk(metindizisi);
    

    return 0;
}
*/
