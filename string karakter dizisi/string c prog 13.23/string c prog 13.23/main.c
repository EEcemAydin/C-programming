//
//  main.c
//  string c prog 13.23
//
//  Created by Ecem Aydın on 13.04.2023.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char misra1[100];
    char misra2[100];
    printf("misralari giriniz:\n");
    int i, j, k, m;
    for (i = 0; i < 10; i++)
    {
        fgets(misra1[i], 15, stdin);
    }
    for (i = 0; i < 10; i++)
    {
        fgets(misra2[i], 15, stdin);
    }
    k = strlen(misra1);
    m = strlen(misra2);
    for (i = k; misra1[i]!= 32; i--)
    {
        
    }
    return 0;
}
