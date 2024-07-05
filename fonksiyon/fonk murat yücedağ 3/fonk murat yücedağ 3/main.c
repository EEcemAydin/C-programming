//
//  main.c
//  fonk murat yücedağ 3
//
//  Created by Ecem Aydın on 3.12.2022.
//

#include <stdio.h>


int main()
{
    printf("************************************\n");
    printf("****            MENU            ****\n");
    printf("** 1-)toplama islemi yapiniz      **\n");
    printf("** 2-)carpma islemi yapiniz       **\n");
    printf("** 3-)kare bulunuz                **\n");
    printf("** 4-)kup bulunuz                 **\n");
    printf("** 5-)denklemi çozunuz(5*x*x+4*+3)**\n");
    printf("************************************\n");
    
    int sayi1;
    int sayi2;
    int sonuc;
    int secim;
    printf("isleminiz:\n");
    scanf("%d",&secim);
    
    switch(secim)
    {
        case 1:
            printf("lutfen iki sayi giriniz:\n");
            scanf("%d%d",&sayi1,&sayi2);
            sonuc=sayi1+sayi2;
            printf("sonuc:%d\n",sonuc);
        break;
        
        case 2:
            printf("lutfen iki sayi giriniz:\n");
            scanf("%d%d,&sayi1,&sayi2");
            sonuc= sayi1 * sayi2;
            printf("sonuc:%d\n",sonuc);
        break;
            
        case 3:
            printf("lutfen tek sayi giriniz:\n");
            scanf("%d",&sayi1);
            sonuc= sayi1 * sayi1;
            printf("sonuc:%d\n",sonuc);
        break;
          
        case 4:
            printf("lutfen sayi giriniz:\n");
            scanf("%d",&sayi1);
            sonuc= sayi1 * sayi1 * sayi1 ;
            printf("sonuc:%d\n",sonuc);
        break;
            
        case 5:;
            printf("x degeri giriniz:\n");
            scanf("%d",&sayi1);
            sonuc=(5*sayi1*sayi1)+4*sayi1+3;
            printf("sonuc:%d\n",sonuc);
        break;
            
            
    }
    return 0;
}
