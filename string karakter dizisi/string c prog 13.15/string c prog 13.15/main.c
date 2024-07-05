//
//  main.c
//  string c prog 13.15
//
//  Created by Ecem Aydın on 10.04.2023.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[50];
    char sonrakikelime[50];
    printf("ilk kelimeyi giriniz:");
    fgets(kelime, 50, stdin);
    int sayac=1,i;
    while (sayac==1)
    {
        sayac=0;
        printf("sonraki kelimeyi giriniz:");
        fgets(sonrakikelime, 50, stdin);
        for (i=0; sonrakikelime[i]!='\0'; i++)
        {
            if(kelime[i]!=sonrakikelime[i])
            {
                sayac++;
            }
        }
        strcpy(kelime, sonrakikelime);
        if(sayac==1)
        {
            printf("1 harf farklı zincir bozulmadı.\n");
        }
        else
        {
            printf("%d harf farklı zincir bozuldu.\n",sayac);
            break;
        }
    }
    return 0;
}
