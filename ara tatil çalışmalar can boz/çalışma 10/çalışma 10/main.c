//
//  main.c
//  çalışma 10
//
//  Created by Ecem Aydın on 20.01.2023.
// CAN BOZ 6. BÖLÜM 130. SORU

#include <stdio.h>

void isaret ( )
{
    int sayi;
    while (1)
    {
        printf("lutfen sayi giriniz.\n");
        scanf("%d",&sayi);
        
        if(sayi<0)
        {
            break;
        }
    }
}
int main()
{
    isaret();
    return 0;
}
