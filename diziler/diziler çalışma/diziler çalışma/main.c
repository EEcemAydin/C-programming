//
//  main.c
//  diziler çalışma
//
//  Created by Ecem Aydın on 29.12.2022.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
//1 den 5 e kadar sayıların karelerini al aritmetik ortalamalarını bul
int main()
{
    
    int i;
    float dizi[4];
    for(i=1;i<=4;i++)
    {
        dizi[i]=i*i;
        printf("%f\n",dizi[i]);
    }
    
    float toplam;
    
    for(i=1;i<=4;i++)
    {
        toplam=toplam+dizi[i];
        
    }
    
    printf("ortalama: %f",toplam/4.0);
    return 0;
}
*/

/*
//rastgele dört sayı al birinci elemanı dörtle ikinci elemanı üçüncüyle yer değiştirip yazdır
int main ()
{
    int dizi[4];
    srand(time(NULL));
    int i;
    for(i=0;i<=3;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    
    for(i=0;i<2;i++)
    {
        int melih;
        melih=dizi[i];
        dizi[i]=dizi[3-i];
        dizi[3-i]=melih;
    }
    
    printf("\n");
    
    for(i=0;i<=3;i++)
    {
        printf("%d ",dizi[i]);
    }
    

    
    return 0;
}

*/

/*
// kullanıcıdan rastgele sayı alarak dizi oluştur onların yerini değiştir
int main()
{
    int sayi;
    printf("lutfen sayi giriniz\n");
    scanf("%d",&sayi);
    
    int dizi[sayi];
    srand(time(NULL));
    
    int i;
    for(i=0;i<sayi;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    
    int zattiri_zort;
    for(i=0;i<sayi/2;i++)
    {
        zattiri_zort=dizi[i];
        dizi[i]=dizi[sayi-1-i];
        dizi[sayi-1-i]=zattiri_zort;
        
    }
     
    printf("\n");
    
    for(i=0;i<sayi;i++)
    {
        printf("%d ",dizi[i]);
    }
    return 0;
}
*/

/*
// iki dizi al elemanları belli olsun küçükten büyüğe doğru sıralı yeni dizi oluştur

int main()
{
    int a[6]={1,3,5,7,8,9};
    int b[4]={2,6,10,13};
    int c[10];
    int ai=0;
    int bi=0;
    int ci=0;
    
    while (ai<6 && bi<4)
    {
     if(a[ai]<b[bi])
     {
         c[ci]=a[ai];
         ci++;
         ai++;
     }
    
    else
    {
        c[ci]=b[bi];
        ci++;
        bi++;
    }
    }
    
    while(ai<6)
    {
        c[ci]=a[ai];
        ci++;
        ai++;
        
    }
    
    while(bi<4)
    {
        c[ci]=b[bi];
        ci++;
        bi++;
    }
    
    int i;
    for (i=0; i<10; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}

*/

/*

// girilen başlangıç ve artış değerlerine göre iki sayi dizisinin 0 ile 100 arasında bu değerler dahil ortak elemanlarını bulup yazdıran programı yazınız. iki adet başlangıç değeri ve iki adet artık miktarı tanımlayınız.

int main()
{
    int a[101];
    int artis1;
    int artis2;
    int baslangic1;
    int baslangic2;
    int i;
    
    printf("lutfen ilk dizinin baslangic degeri ve artis miktarını giriniz:\n");
    scanf("%d %d",&baslangic1,&artis1);
    
    for (i=baslangic1 ;i<=100; i=i+artis1)
    {
        a[i]=i;
    }
    
   

    printf("lutfen ikinci dizinin baslangic degeri ve artıis miktarini giriniz:\n");
    scanf("%d %d",&baslangic2,&artis2);
    
    printf("ortak elemanlar \n");
    
    for (i=baslangic2; i<=100; i=i+artis2)
    {
        if(a[i]==i && a[i]!=0)
        {
            printf("%d ",i);
        }
    }
    
       return 0;
}

*/

// girilen 10 tamsayı arasında en çok tekrar edileni yazdır

int main()
{
    int a[10];
    int i;
    
    
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("dizinin elemanlar:\n");
    
    for (i=0; i<10; i++)
    {
        printf("%d",a[i]);
    }
    
    
    return 0;

    }
    
