//
//  main.c
//  pointer 20
//
//  Created by Ecem Aydın on 30.03.2023.
// kullanıcanadn sayıları al pointerlı for kullancaz
//dizi fonksiyona yollanıp dizi içindeki sayıların toplamı bulunacak
//dizi içindeki sayıların ortalaması bulunacak
//dizi içindeki sayıların en büyüğü bulunacak
//dizi içindeki sayıların en küçüğü bulunacak
//ve bunnların hepsi main fonksiyonunda yazdırılacak
//fonksiyon(dizi,&toplam,&eleman sayısı,&ortalaması,&en büyük,&en küçük);

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void   enbuyukfonk(int n,int arr[],int *enbuyuk)
{
    int *ptr;
    for (ptr=arr; ptr<arr+n; ptr++)
    {
        if(*ptr>*enbuyuk)
        {
            *enbuyuk=*ptr;
        }
    }
}
void   enkucukfonk(int n,int arr[],int *enkucuk)
{
    int *ptr;
    *enkucuk=arr[0];
    for (ptr=arr; ptr<arr+n; ptr++)
    {
        if(*ptr<*enkucuk)
        {
            *enkucuk=*ptr;
        }
    }
}
void ortalamafonk(int n,int top,float *ort)
{
    *ort=top/n;
}
void toplamfonk(int n,int arr[],int *top)
{
    int *ptr;
    ptr=arr;
    for (ptr=arr; ptr<arr+n; ptr++)
    {
        *top=*top+*ptr;
    }
    
}
int main()
{
    srand(time(NULL));
    int n;
    int top=0;
    float ort;
    int enbuyuk,enkucuk;
    printf("dizinin boyutunu giriniz:\n");
    scanf("%d",&n);
    int arr[n];
    int *ptr;
    ptr=arr;
    for (ptr=arr ; ptr<arr+n; ptr++)
    {
        *ptr=rand()%100;
        printf("%d ",*ptr);
    }
    printf("\n");
    toplamfonk(n,arr,&top);
    ortalamafonk(n,top,&ort);
    enbuyukfonk(n,arr,&enbuyuk);
    enkucukfonk(n,arr,&enkucuk);
    printf("sayıların toplamı=%d\n",top);
    printf("sayıların ortalaması=%.2f\n",ort);
    printf("sayıların en büyüğü=%d\n",enbuyuk);
    printf("sayıların en kücüğü=%d\n",enkucuk);
    return 0;
}
