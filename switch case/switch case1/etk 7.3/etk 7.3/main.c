//
//  main.c
//  etk 7.3
//
//  Created by Ecem Aydın on 30.10.2022.
//

#include <stdio.h>

int main()
{   char tur_turu;
    
    int kisi;
    int otobus;
    int bos_koltuk;
    float doluluk;

    printf("lutfen tur turu seciniz:\n");
    scanf("%c",&tur_turu);
    printf("lutfen kisi sayisi giriniz:\n");
    scanf("%d",&kisi);
   
   
    otobus=(kisi/46+1);
    bos_koltuk=(otobus*46-kisi);
    printf("%d",otobus);
    printf("%d",bos_koltuk);
            
    doluluk=kisi/(otobus*46);
    printf("doluluk:%f",doluluk);
    
    
    }
    
    
    
    
    
    
    
    
    
    
    
    
        return 0;
}
