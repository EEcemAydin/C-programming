//
//  main.c
//  13.21
//
//  Created by Ecem Aydın on 12.04.2023.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char sıralama[5][15];
    char temp[15];
    printf("isimleri giriniz:\n");
    int i,j;
    for (i=0; i<5; i++)
    {
        fgets(sıralama[i], 15, stdin);
    }
    printf("sıralanmış hali:\n");
    for (i=0; i<10; i++)
    {
        for (j=i; j<5; j++)
        {
            if(sıralama[i][0]>sıralama[j][0])
            {
                strcpy(temp,sıralama[i]);
                strcpy(sıralama[i],sıralama[j]);
                strcpy(sıralama[j],temp);
            }
            else if(sıralama[i][0]==sıralama[j][0])
            {
                if(sıralama[i][1]>sıralama[j][1])
                {
                    strcpy(temp,sıralama[i]);
                    strcpy(sıralama[i],sıralama[j]);
                    strcpy(sıralama[j],temp);
                }
            }
        }
    }
    for (i=0; i<5; i++)
    {
        printf("%s ",sıralama[i]);
    }
    return 0;
}
