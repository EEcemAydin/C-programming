//
//  main.c
//  calısma2
//
//  Created by Ecem Aydın on 19.01.2023.
//

#include <stdio.h>

int main() {
   
    int a,b;
    printf("lutfen iki sayı degeri giriniz:\n");
    scanf("%d%d",&a,&b);
    
    if(a==b)
    {
        printf("sayılar ayni degere sahiptir");
    }
    
    if(a!=b)
    {
        if(a<b)
        {
            printf("birinici sayi kücüktür.\n");
        }
        
        else
        {
            printf("birinci sayi büyüktür.\n");
        }
    }
    return 0;
}
