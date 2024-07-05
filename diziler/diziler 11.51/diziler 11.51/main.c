//
//  main.c
//  diziler 11.51
//
//  Created by Ecem Aydın on 15.03.2023.
//

#include <stdio.h>
#include <math.h>

float ort(float arr[])
{
    float x;
    float toplam=0;
    int i;
    for (i=0; i<10; i++)
    {
        toplam=toplam+arr[i];
    }
    x=toplam/10;
    return x;
}
float standartsap(float arr[])
{
    float a;
    int i;
    float karetop=0;
    for (i=0; i<10; i++)
    {
        karetop=karetop+(arr[i]*arr[i]);
    }
    float topkare=0;
    for (i=0; i<10; i++)
    {
        topkare=topkare+arr[i];
    }
    topkare=pow(topkare,2);
    float karekoksuzhali;
    karekoksuzhali=((10*karetop)-topkare)/(10*(10-1));
    a=sqrt(karekoksuzhali);
    return a;
}

int main()
{
    float o,ss;
    float arr[10];
    int i;
    for (i=0; i<10; i++)
    {
        scanf("%f",&arr[i]);
    }
    o=ort(arr);
    ss=standartsap(arr);
    for (i=0; i<10; i++)
    {
        printf("%d . ogrencinin harf notu :",i+1);
        if(arr[i]>=o+(1.5*ss))
        {
            printf("A\n");
        }
        else if(arr[i]<o+(1.5*ss) && o+(0.5*ss)<=arr[i])
        {
            printf("B\n");
        }
        else if(arr[i]<o+(0.5*ss) && o-(0.5*ss)<=arr[i])
        {
            printf("C\n");
        }
        else if(arr[i]<o-(0.5*ss) && o-(1.5*ss)<=arr[i])
        {
            printf("D\n");
        }
        if(arr[i]<o-(1.5*ss))
        {
            printf("F");
        }
        
    }
    
    
    return 0;
}
