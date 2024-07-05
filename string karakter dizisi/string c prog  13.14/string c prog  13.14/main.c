//
//  main.c
//  string c prog  13.14
//
//  Created by Ecem Aydın on 10.04.2023.
//

#include <stdio.h>

int main() {
    char cümle[100];
    printf("metni giriiz:");
    fgets(cümle, 100, stdin);
    int öteleme,i,a;
    printf("öteleme miktarıb giriniz:");
    scanf("%d",&öteleme);
    for (i=0; cümle[i]!='\0'; i++)
    {
        if(97<=cümle[i]+öteleme && cümle[i]+öteleme<=122)
        {
            cümle[i]=cümle[i]+öteleme;

        }
        else if(cümle[i]+öteleme>122)
        {
            a=(cümle[i]+öteleme)-122;
            cümle[i]=96+a;
        }
    }
    puts(cümle);
    
    return 0;
}

