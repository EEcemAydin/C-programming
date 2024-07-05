//
//  main.c
//  diziler 11.24
//
//  Created by Ecem Aydın on 12.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int n;
    int sicil[n],satis[n];
    printf("personel sayisi giriniz:\n");
    scanf("%d",&n);
    int i;
    for (i=0 ; i<n; i++)
    {
        printf("%d. personelin sicili ve satis miktari:",i+1);
        scanf("%d%d",&sicil[i],&satis[i]);
    }
    int max;
    max=satis[0];
    for (i=0; i<n; i++)
    {
        if(max<satis[i])
        {
            max=satis[i];
        }
    }
    printf("personel ne kadar satis yapacak:\n");
    printf("sicil:  ");
    int ihtiyac;
    for (i=0; i<n; i++)
    {
        scanf("%4d",&sicil[i]);
       
    }
    printf("ihtiyac:");
    for (i=0; i<n; i++)
    {
        ihtiyac=max-satis[i];
        printf("%3d ",ihtiyac);
    }
    
    return 0;
}
