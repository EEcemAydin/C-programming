//
//  main.c
//  diziler 11.14
//
//  Created by Ecem Aydın on 11.03.2023.
//

#include <stdio.h>

int main()
{
    int a[5];
    int b[5];
    int i,j;
    printf("a dizisinin elemanlarını giriniz:");
    for (i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("b dizisinin elemanlarını giriniz:");
    for (j=0; j<5; j++)
    {
        scanf("%d",&b[j]);
    }
    printf("ortak eleman:");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
            }
        }
    }
    
   
    return 0;
}
