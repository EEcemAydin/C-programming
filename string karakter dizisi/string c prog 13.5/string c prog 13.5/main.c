//
//  main.c
//  string c prog 13.5
//
//  Created by Ecem Aydın on 8.04.2023.
//

#include <stdio.h>

int main()
{
    char uyum[100];
    fgets(uyum, 100, stdin);
    int i,j,sayac=0;
    char buyuk1[3]={'a','o','u'};
    char buyuk2[4]={'e','ö','ü','i'};
    for (i=0; uyum[i]!='\0'; i++)
    {
        sayac++;
    }
    for (i=0; i<sayac; i++)
    {
        for (j=1; j<sayac; j++)
        {
            if(uyum[i]==buyuk1[i] && uyum[j]==buyuk1[j])
            {
                printf("büyük ünlü uyumuna uyuyor");
            }
           else if(uyum[i]==buyuk2[i] && uyum[j]==buyuk2[j])
            {
                printf("büyük ünlü uyumuna uyuyor");
            }
            else if(uyum[i]==buyuk1[i] && uyum[j]!=buyuk1[j])
            {
                printf("büyük ünlü uyumuna uymuyor");
            }
            else if(uyum[i]==buyuk2[i] && uyum[j]!=buyuk2[j])
            {
                printf("büyük ünlü uyumuna uymuyor");
            }

            
        }
    }
    return 0;
}
