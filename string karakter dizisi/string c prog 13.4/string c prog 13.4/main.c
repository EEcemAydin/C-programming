//
//  main.c
//  string c prog 13.4
//
//  Created by Ecem Aydın on 7.04.2023.
//

#include <stdio.h>

int main()
{
    char cümle[100];
    printf("dizgiyi giriniz:");
    fgets(cümle, 100, stdin);
    int i;
    for (i=0; i<100; i++)
    {
        if(65<=cümle[i] && cümle[i]<=90)
        {
            cümle[i]=cümle[i]+32;
        }
        else if(97<=cümle[i] && cümle[i]<=122)
        {
            cümle[i]=cümle[i]-32;
        }
        
    }
    puts(cümle);
    return 0;
}
