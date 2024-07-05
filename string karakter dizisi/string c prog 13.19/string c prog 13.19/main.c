//
//  main.c
//  string c prog 13.19
//
//  Created by Ecem Aydın on 13.04.2023.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char ilkson[10][15];
    int i,j;
    printf("isimleri giriniz:\n");
    for (i=0; i<10; i++)
    {
        fgets(ilkson[i], 15, stdin);
    }
    printf("uyanlar:");
    for (i=0; i<10; i++)
    {
        for (j=0; ilkson[i][j]!='\0'; j++)
        {
           
        }
        if(ilkson[i][j-2]==ilkson[i][0])
        {
            puts(ilkson[i]);
        }
    }
    return 0;
}
