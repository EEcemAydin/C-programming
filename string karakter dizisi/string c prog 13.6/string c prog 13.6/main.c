//
//  main.c
//  string c prog 13.6
//
//  Created by Ecem Aydın on 8.04.2023.
//

#include <stdio.h>

int main()
{
    char buyukkucuk[100];
    printf("dizgi giriniz:");
    fgets(buyukkucuk, 100, stdin);
    int i;
    for (i=0; i<100; i++)
    {
        if(65<=buyukkucuk[i] && buyukkucuk[i]<=90)
        {
            buyukkucuk[i]=buyukkucuk[i]+32;
        }
    }
    buyukkucuk[0]=buyukkucuk[0]-32;
    for (i=0; i<100; i++)
    {
        if(buyukkucuk[i]==' ')
        {
            buyukkucuk[i+1]=buyukkucuk[i+1]-32;
        }
        
    }
    puts(buyukkucuk);
    
    return 0;
}
