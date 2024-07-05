//
//  main.c
//  fonksiyon asal sayi
//
//  Created by Ecem Aydın on 3.12.2022.
//

#include <stdio.h>
#include <stdlib.h>
int asal(int deger)
{
    int i,sonuc;
    sonuc=1;
    
    for(i=2;i<=deger;i++)
    {
        if(deger%i==0)
        {
            sonuc=0;
            break;
        }
    }
    return sonuc;
}


int main()
{
    int sayi;
    printf("lutfen sayi giriniz;\n");
    scanf("%d",&sayi);
    
    asal(sayi);
    
    if(asal(sayi)! =0)
    {
        printf("%d sayisi asal sayidir.\n",sayi);
    }
    else
    {
        printf("%d asal sayi degildir.\n",sayi);
    }
    return 0;
}
