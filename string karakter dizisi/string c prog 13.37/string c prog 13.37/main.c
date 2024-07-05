//
//  main.c
//  string c prog 13.37
//
//  Created by Ecem Aydın on 18.04.2023.
//

#include <stdio.h>
#include <string.h>
void  makeAcronym(char cümle[],char *kısaltma)
{
    int i,j=1;
    kısaltma[0]=cümle[0];
    for (i=0; cümle[i]!='\0'; i++)
    {
        if(cümle[i]==32)
        {
            if(97<=cümle[i+1] && cümle[i+1]<=122)
            {
                cümle[i+1]=cümle[i+1]-32;
                kısaltma[j]=cümle[i+1];
                j++;
            }
            else
            {
                kısaltma[j]=cümle[i+1];
                j++;
            }
        }
    }
}
int main()
{
    char cümle[100];
    char kısaltma[10];
    printf("cümle giriniz:");
    fgets(cümle, 100, stdin);
    makeAcronym(cümle,kısaltma);
    printf("kısaltma:");
    puts(kısaltma);
    
    return 0;
}
