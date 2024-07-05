//
//  main.c
//  pointer 2023 pointer 1.ö quiz
//
//  Created by Ecem Aydın on 4.04.2023.
//

#include <stdio.h>
void ucgencizdir(int *p)
{
    int i, j;
    for (i = 1; i <= *(p + 1); i++)
    {
        
        for (int j = 0; j < *(p + 1) - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("X ");
        }
        printf("\n");
    }
}
int satirhesapla(int *p)
{
    int i = 0, j = 0;
    int control = 0;
    for (i = 0;; i++)
    {
        j = j + i;
        if (j == *p)
        {
            *(p + 1) = i;
            printf("girilen deger pascal ucgeni cizmeye uygundur.\n");
            printf("satır sayisi %d olarak hesaplanmistir.\n", p[1]);
            control = 1;
            break;
        }
        else if (j > *p)
        {
            control = 0;
            break;
        }
    }
    if (control == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
bas:
    int arr[2]; // arr[0] T degerini tutuyor.arr[1] satır sayısını tutuyor.
    int x;
    char c;
    printf("t degeriniz girinz:\n");
    scanf("%d", &arr[0]);
    x = satirhesapla(arr);
    if (x == 0)
    {
        printf("girilen deger paskal ucgeni cizdirmeye uygun değildir.\n");
    }
    else
    {
        ucgencizdir(arr);
    }
    printf("Devam Etmek icin Y'ye cikmak icin N'ye basiniz.\n");
    scanf(" %c", &c);
    if (c == 'Y')
    {
        goto bas;
    }
    else
    {
        return 0;
    }
}
