//
//  main.c
//  diziler udemy5
//
//  Created by Ecem Aydın on 12.12.2022.
// do while ile dizi çözümü

#include <stdio.h>

int main()
{
    int dizim[3];
    int i;

    i=0;
    
    printf("lutfen uc sayi giriniz:\n");
    do
    {
        scanf("%d",&dizim[i]);
        i++;
    }while(i<3);
    
    i=0;
    
    do
    {
        printf("%d\n",dizim[i]);
        i++;
    }while(i<3);
    return 0;
}
