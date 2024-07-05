//
//  main.c
//  çalışma 5
//
//  Created by Ecem Aydın on 19.01.2023.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float x,toplam;
    
    printf("pozitif sayı giriniz:\n");
    scanf("%d",&n);
    printf("reel sayi:\n");
    scanf("%f",&x);
    
    for (i=1;i<=2*n-1;i++)
    {
        toplam=toplam+pow(x,i+1);
    }
    
    printf("%f",toplam);
    
    return 0;
}
