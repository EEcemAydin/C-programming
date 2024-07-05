//
//  main.c
//  çalışma 4
//
//  Created by Ecem Aydın on 19.01.2023.
//  CAN BOZ 4. BÖLÜM SORU 110

#include <stdio.h>

int main() {
    printf("lutfen ucgenin ic acilarını giriniz:\n");
    int a1,a2,a3;
    scanf("%d%d%d",&a1,&a2,&a3);
    printf("%d%d%d",a1,a2,a3);
    
    if(a1==a2 && a2==a3)
    {
        printf("bu ucgen eskanardir\n");
    }
    
    else if(a1==a2 && a2!=a3 && a1!=a3)
    {
        printf("bu ucgen ikizkenardir\n");
    }
    
    else
    {
        printf("bu ucgen cesitkenardir\n");
    }
    return 0;
}
