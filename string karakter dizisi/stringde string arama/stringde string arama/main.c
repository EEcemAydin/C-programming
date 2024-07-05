//
//  main.c
//  stringde string arama
//
//  Created by Ecem Aydın on 15.04.2023.
//

#include <stdio.h>
#include <string.h>

void  control(const char *cümle,const char *varmıyokmu,int cks,int vmymks)
{
    int i,j;
    int control=0;
    for (i=0; i<cks; i++)
    {
        for (j=0; j<vmymks; j++)
        {
            if(varmıyokmu[j]!=cümle[i+j])
            {
                break;
            }
            
        }
            
    }
    if(j==vmymks)
    {
        printf("var");
    }
}
int main()
{
    char cümle[15];
    char varmıyokmu[15];
    printf("cümleyi giriniz:");
    fgets(cümle, 15, stdin);
    printf("aranan cümleyi giriniz:");
    fgets(varmıyokmu, 15, stdin);
    int cks;
    cks=strlen(cümle);
    int vmymks;
    vmymks=strlen(varmıyokmu);
    control(cümle,varmıyokmu,cks,vmymks);
    
    return 0;
}
//başla
//
