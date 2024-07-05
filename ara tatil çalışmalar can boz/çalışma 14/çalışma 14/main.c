//
//  main.c
//  çalışma 14
//
//  Created by Ecem Aydın on 21.01.2023.
// CAN BOZ 6. BÖLÜM 135. SORU

#include <stdio.h>

int fibonacci(int fibonacci_sayisi)
{
    int ilk=0;
    int ikinci=1;
    int sonraki;
    int i;
    for (i=0; i=fibonacci_sayisi; i++)
    {
        if(i<=1)
        {
            sonraki=i;
        }
        
        else
        {
            sonraki=ilk+ikinci;
            ilk=ikinci;
            ikinci=sonraki;
        }
        printf("%d",sonraki);
    }
    return 0;
}

int main()
{
    int fibonacci_sayisi;
    printf("kaç adet fibonacci sayisi üretilmeli?\n");
    scanf("%d",&fibonacci_sayisi);
    
    fibonacci(fibonacci_sayisi);
    
    return 0;
}
