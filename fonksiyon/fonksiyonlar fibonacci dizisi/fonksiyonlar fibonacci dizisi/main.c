//
//  main.c
//  fonksiyonlar fibonacci dizisi
//
//  Created by Ecem Aydın on 3.12.2022.
//

#include <stdio.h>

 void fibonacci(int boyut,int a,int b,int i)
{
     a=0;
     b=1;
    printf("lutfen boyut giriniz:\n");
    scanf("%d",&boyut);
    
    if(boyut<=2)
    {
        if(boyut==1)
        {
            printf("%d ",a);
        }
        else if(boyut==0)
        {
            printf("%d - %d",a,b);
        }
        else
        {
            printf("hatalı girdiniz");
        }
    }
    
    else
    {
        printf("%d - %d - ",a,b);
        for(i=3;i<=boyut;i++)
        {
            int c;
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
     }
       
    }
              
    }

    int main()
  {
         int boyut;
         int a;
         int b;
         int i;
         
         fibonacci(boyut, a, b, i);
         
         return 0;
   }
    
    
        
    
    
    
    

