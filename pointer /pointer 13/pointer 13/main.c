//
//  main.c
//  pointer 13
//
//  Created by Ecem Aydın on 2.03.2023.
//

#include <stdio.h>

int main()
{
    printf("karakter dizisi giriniz:\n");
    char arr[100];
    gets(arr);
    
    printf("silinecek karakteri giriniz:\n");
    char s_kar;
    scanf("%c",&s_kar);
    
    char *pntr;
    
    for (pntr=arr; pntr<arr+100; pntr++)
    {
        if(s_kar==*pntr)
        {
            break;
        }
    }
    
    for (pntr; pntr=arr+100; pntr++)
    {
        *pntr = *pntr+1 ;
    }
    
    printf("%s",arr);
    
    return 0;
}
