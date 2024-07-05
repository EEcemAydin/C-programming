//
//  main.c
//  diziler udemy4
//
//  Created by Ecem Aydın on 12.12.2022.
//diziyi while donusuyle yapalım

#include <stdio.h>

int main()
{
    int dongudizi[4];
    int i;
    i=0;
    
    printf("lutfen kullanıcıdan 4 sayı isteyiniz\n");
    
    while(i<4)
    {
        scanf("%d",&dongudizi[i]);
        i++;
    }
    
    i=0;
    while(i<4)
    {
        printf("%d\n",dongudizi[i]);
        i++;
    }
    
    return 0;
}
