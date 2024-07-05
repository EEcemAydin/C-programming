//
//  main.c
//  string c prog 13.18
//
//  Created by Ecem Aydın on 11.04.2023.
//

#include <stdio.h>

int main()
{
    
    char ad[5][15];
    int j,i;
    printf("isimleri giriniz:");
    for (i=0; i<5; i++)
    {
        fgets(ad[i], 15, stdin);
    }
    printf("uyanlar:\n");
    for (i=0; i<5; i++)
    {
        for (j=0; ad[i][j]!='\0'; j++)
        {
            
        }
        if(ad[i][j-2]=='n' && ad[i][j-3]=='a')
        {
            puts(ad[i]);
        }
        
    }
        return 0;
}
