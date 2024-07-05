//
//  main.c
//  diziler 1. ö final sınavı
//
//  Created by Ecem Aydın on 14.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void hesap(int dizi[])
{
    int neg[10];
    int poz[10];
    int pozsay = 0;
    int negsay = 0;
    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] > 0)
        {
            poz[pozsay] = dizi[i];
            pozsay++;
        }
        if (dizi[i] < 0)
        {
            neg[negsay] = dizi[i];
            negsay++;
        }
    }
    for (int i = 0; i < pozsay; i++)
    {
        printf("%d ", poz[i]);
    }
    printf("\t");
    for (int i = 0; i < negsay; i++)
    {
        printf("%d ", neg[i]);
    }

    sirala(poz, neg, pozsay, negsay);
}
void sirala(int poz[], int neg[], int pozsay, int negsay)
{
    int temp;
    for (int i = 0; i < pozsay; i++)
    {
        for (int j = 0; j < pozsay; j++)
        {
            if (poz[i] < poz[j])
            {
                temp = poz[i];
                poz[i] = poz[j];
                poz[j] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < pozsay; i++)
    {
        printf("%d ", poz[i]);
    }
    for (int i = 0; i < negsay; i++)
    {
        for (int j = 0; j < negsay; j++)
        {
            if (neg[i] > neg[j])
            {
                temp = neg[i];
                neg[i] = neg[j];
                neg[j] = temp;
            }
        }
    }
    printf("\t");
    for (int i = 0; i < negsay; i++)
    {
        printf("%d ", neg[i]);
    }
}
int main()
{
    srand(time(NULL));
    int dizi[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        dizi[i] = (rand() % 201) - 100;
    }
    hesap(dizi);
}
