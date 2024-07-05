//
//  main.c
//  switch case1
//
//  Created by Ecem Aydın on 30.10.2022.
//

#include <stdio.h>

int main()
{
    int gun;
    int km;
    int ucret;
    char tasit;
    
    printf("lutfen tip seciniz \n");
    printf(" (A veya a) Arazi \n");
    printf(" (B veya b) Binek \n");
    printf(" (P veyA p) Spor  \n");
    
    printf("lutfen tasit turu giriniz:\n");
    scanf("%c",&tasit);
    
    printf("lutfen gun giriniz:\n");
    scanf("%d",&gun);
    
    printf("lutfen km giriniz:\n");
    scanf("%d",&km);
    

    switch(tasit)
    {
        case 'A':
        case 'a':
            ucret=(20 * gun + 18 * km);
            printf("ucret:%d",ucret);
            break;
        
        
        case 'B':
        case 'b':
            ucret=(32* gun + 22 * km);
            printf("ucret:%d",ucret);
            break;
            
        case 'P':
        case 'p':
            ucret=(51 * gun + 36 * km);
            printf("ucret:%d\n",ucret);
            break;
        
        default:
            printf("yanlis deger girdiniz");
            
    }
    return 0;
}
