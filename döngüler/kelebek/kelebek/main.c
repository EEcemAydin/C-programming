//
//  main.c
//  kelebek
//
//  Created by Ecem Aydın on 20.11.2022.
//

#include <stdio.h>

int main()
{
    int sayi,i,j;
    printf("lutfen sayi giriniz:");
    scanf("%d",&sayi);
    
    for(i=0;i<sayi;i++)
    {
        for(j=0;j<sayi;j++)
        {
            printf("%d ",j*3);
        }
        printf("\n");
    }
    
    
    return 0;
}
