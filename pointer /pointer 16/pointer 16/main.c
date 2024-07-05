//
//  main.c
//  pointer 16
//
//  Created by Ecem Aydın on 27.03.2023.
//

#include <stdio.h>
void  aracKoltukSayisiBul(int *kisi,int *otobsay,int *boskoltuk)
{
    if(*kisi%46==0)
    {
        *otobsay=(*kisi/46);
    }
    else
    {
        *otobsay=(*kisi/46)+1;
        
    }
   
    *boskoltuk=(*otobsay*46)-*kisi;
    
}
int main()
{
    int kisi,otobsay,boskoltuk;
    printf("tura kac kisi katılacak:\n");
    scanf("%d",&kisi);
    aracKoltukSayisiBul(&kisi,&otobsay,&boskoltuk);
    printf("otobus sayısı:%d,bos koltuk sayısı:%d",otobsay,boskoltuk);
    return 0;
}
