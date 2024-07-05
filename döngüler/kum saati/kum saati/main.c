//
//  main.c
//  kum saati
//
//  Created by Ecem Aydın on 21.11.2022.
//

#include <stdio.h>

int main(){
    
    int i;
    int j;
    int sayi;
    
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    
    for(i=1;i<=sayi;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*sayi-2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=sayi-1;i++)
    {
        for(j=1;j<=sayi-i-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
