//
//  main.c
//  diziler 2016 1.ö quiz
//
//  Created by Ecem Aydın on 15.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[10]={130,10,4,1,9,2,25,30,8,4};
    float ort;
    float toplam=0;
    int i;
    printf("dizinin elemanları:130 10 4 1 9 2 25 30 8 4\n");
    for (i=0; i<10; i++)
    {
        toplam=toplam+arr[i];
    }
    ort=toplam/10;
    printf("dizinin ortalamasi:%.2f\n",ort);
    float fark,minfark;
    minfark=arr[0];
    int y_sayı;
    for (i=0; i<10; i++)
    {
        fark=fabs(ort-arr[i]);
        if(fark<minfark)
        {
            minfark=fark;
            y_sayı=arr[i];
        }
    }
    
    printf("ortalamaya en yakın dizi elemanı %d\n",y_sayı);
    return 0;
}
