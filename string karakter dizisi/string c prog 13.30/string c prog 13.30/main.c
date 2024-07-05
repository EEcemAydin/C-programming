//
//  main.c
//  string c prog 13.30
//
//  Created by Ecem Aydın on 15.04.2023.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char gün[7][15]={"pazartesi","salı","çarşamba","perşembe","cuma","cumartesi","pazar"};
    char alınan[15];
    printf("günün adını giriniz:");
    fgets(alınan, 15, stdin);
    int i,x;
    for (i=0; i<7; i++)
    {
        x=strstr(alınan, gün[i]);
        if(x==0)
        {
            break;
        }
    }
    printf("%sgünü haftanın %d. günüdür.",alınan,i+1);
    
    
    return 0;
}
