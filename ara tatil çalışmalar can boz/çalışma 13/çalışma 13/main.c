//
//  main.c
//  çalışma 13
//
//  Created by Ecem Aydın on 21.01.2023.
//

#include <stdio.h>

void tek_sayi(int number)
{
    int i;
    for (i=0; i<=number; i++)
    {
        if(i%2==1)
        {
            printf("%d sayisi tek sayidir.\n",i);
        }
    }
}

int main ()
{
    int number;
    printf("please enter a number.\n");
    scanf("%d",&number);
    
    tek_sayi(number);
    return 0;
}
