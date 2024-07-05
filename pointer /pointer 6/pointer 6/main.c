//
//  main.c
//  pointer 6
//
//  Created by Ecem Aydın on 20.02.2023.
// pointer yardımıyla iki sayi al ve yerlerini değiştir

#include <stdio.h>

int main()
{
    int sayi1;
    int sayi2;
    int *pntr1;
    int *pntr2;
    
    pntr1=&sayi1;
    pntr2=&sayi2;
    
    int gecici;
    printf("lutfen iki sayi giriniz:\n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("degismeden önce 1.sayi:%d 2.sayi:%d\n",sayi1,sayi2);
    
    gecici=*pntr1;
    *pntr1=*pntr2;
    *pntr2=gecici;
    
    printf("degistikten sonra 1.sayi:%d 2.sayi:%d\n",*pntr1,*pntr2);
    
    
    
    return 0;
}
