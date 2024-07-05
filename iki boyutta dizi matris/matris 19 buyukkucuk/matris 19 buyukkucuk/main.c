//
//  main.c
//  matris 19 buyukkucuk
//
//  Created by Ecem Aydın on 23.03.2023.
//

#include <stdio.h>

int main()
{
    int n, m, a, ikeeper = 0, jkeeper = 0;
    printf("buyuk matrisin satır sayısını giriniz:\n");
    scanf("%d", &n);
    printf("buyuk matrisin sutun sayısını giriniz:\n");
    scanf("%d", &m);
    printf("buyuk matrisin elemanlarını girin:\n");
    int i, j;
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("arr[%d][%d]=", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("buyuk matrisin elemanlar:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    int aranansatır, aranansutun;
    printf("aranan matrisin satır sayısını giriniz:\n");
    scanf("%d", &aranansatır);
    printf("aranan matrisin sutun sayısını giriniz:\n");
    scanf("%d", &aranansutun);
    printf("aranan matrisin elemanlarını giriniz\n");
    int brr[aranansatır][aranansutun];
    for (i = 0; i < aranansatır; i++)
    {
        for (j = 0; j < aranansutun; j++)
        {
            printf("brr[%d][%d]=", i + 1, j + 1);
            scanf("%d", &brr[i][j]);
        }
    }
    for (i = 0; i < aranansatır; i++)
    {
        for (j = 0; j < aranansutun; j++)
        {
            printf("%4d", brr[i][j]);
        }
        printf("\n");
    }
    
    int y, z, control;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (brr[0][0] == arr[i][j])
            {
                ikeeper = i;
                jkeeper = j;
                for (y = i; y < aranansutun; y++)
                {
                    for (z = j; z < aranansutun; z++)
                    {
                        if (arr[y][z] == brr[y - i][z - j])
                        {
                            control = 1;
                        }
                        else if (arr[y][z] != brr[y - i][z - j])
                        {
                            control = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
    if (control == 0)
    {
        printf("aranan matris buyukte yok.");
    }
    if (control == 1)
    {
        printf("aranan matris buyukte var.");
        printf("aranan matris buyuk matrisin %d . satırında %d . sutununda baslamaktadir", ikeeper+1, jkeeper+1);
    }
    
    return 0;
}
