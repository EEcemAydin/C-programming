//
//  main.c
//  fonksiyonlar faktoriyel alma
//
//  Created by Ecem Aydın on 3.12.2022.
//

#include <stdio.h>

void sonuc(int sayi,int faktoriyel,int i)
{
    for(i=sayi; i>=1; i--)
    {
        faktoriyel*=i;
    }
    
    printf("%d != %d",sayi,faktoriyel);
}


int main()
{
    int sayi;
    int faktoriyel;
    int i;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%d",&sayi);
    
    sonuc(sayi, faktoriyel, i);
    
    return 0;
}
