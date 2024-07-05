//
//  main.c
//  çarpım tablosu
//
//  Created by Ecem Aydın on 20.11.2022.
//

#include <stdio.h>

    int main() {
        int i;
        int j;
        
        for(i=1;i<=10;i++)
        {
            for(j=1;j<=10;j++)
            {
                printf("%d*%d=%d\n",i,j,i*j);
            }
            
            printf("\n");
            
            
        }
   
    return 0;
}
