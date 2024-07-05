//
//  main.c
//  11.23
//
//  Created by Ecem Aydın on 12.03.2023.
//bilye çapi sayisi=n

#include <stdio.h>
#include <stdlib.h>
int  enbEnkArasiUzaklik(float arr[],int n )
{
    int uzaklık,maxi,mini,i;
    float max,min;
    max=arr[0];
    min=arr[0];
    
    for (i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            maxi=i;
            
        }
    }
    for (i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            mini=i;
        }
    }
    uzaklık=abs(maxi-mini)-1;
    
    return uzaklık;
}

int main()
{
    int n;
    printf("lutfen bilye capi sayisi giriniz:\n");
    scanf("%d",&n);
    float arr[n];
    if(n>50)
    {
        printf("YANLIS!! EN FAZLA 50 GİREBİLİRSİNİZ.");
    }
    else
    {
        printf("%d adet cap giriniz:\n",n);
        int i;
        for (i=0; i<n; i++)
        {
            scanf("%f",&arr[i]);
        }
    }
    int x;
    x=enbEnkArasiUzaklik(arr,n);
    printf("en buyuk ile en kucuk arasında %d adet bilye vardir.\n",x);
    
        
    return 0;
}
