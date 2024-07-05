//
//  main.c
//  diziler 11.27
//
//  Created by Ecem Aydın on 13.03.2023.
//

#include <stdio.h>
void birKisaBirUzun(float arr[])
{
    int i,j;
    float temp;
    for (i=0; i<12; i++)
    {
        for (j=i; j<12; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for (i=0; i<6; i++)
    {
        printf("%.2f %.2f ",arr[i],arr[11-i]);
    }
}

int main()
{
    float arr[12];
    int i;
    printf("oyuncularun boylarını giriniz:");
    for (i=0; i<12; i++)
    {
        scanf("%f",&arr[i]);
    }
    
    birKisaBirUzun(arr);
    
    return 0;
}
