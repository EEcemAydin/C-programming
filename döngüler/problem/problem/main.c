//
//  main.c
//  problem
//
//  Created by Ecem Aydın on 21.11.2022.
//

#include <stdio.h>

int main() {
    int sayi=0;
    int carpim_degeri=0;
    int a=0;
    int b=0;
    
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    
    for(sayi;sayi<100;)
    {
        if(sayi>=10)
        {
            for(sayi;sayi>=10;carpim_degeri++)
            {
                a=sayi%10;
                b=(sayi/10)%10;
                sayi=a*b;
            }
        }
        else
            break;
        printf("carpim direnci=%d/n",carpim_degeri);
            
    }
    return 0;
}
