//
//  main.c
//  diziler udemy 7
//
//  Created by Ecem Aydın on 12.12.2022.
//iki boyutlu diziler pekiştirme sorusu
// n*n lik bir prog yazın n*p eleman içeren iki matrisin elemanlarını toplayın sonucu üçüncü bir matrise yazdın.

#include <stdio.h>

int main()
{
    int mat[10][10];
    int i;
    int j;
    
    for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(i==j)
                {
                    mat [i][j]=1;
                }
                
                else
                {
                    mat [i][j]=0;
                }
            }
        
            
        }
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%2d",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
