//
//  main.c
//  fonksiyon 1.4
//
//  Created by Ecem Aydın on 26.11.2022.
//

#include<stdio.h>
#include<stdlib.h>


void dortislem(float a,float b,char islem)
{
    
    if(islem =='+')
    {
        printf("%.2f+%.2f=%.2f",a,b,a+b);
    }
    else if(islem == '-')
    {
        printf("%.2f-%.2f=%.2f",a,b,a-b);
    }
    else if(islem == '*')
    {
        printf("%.2f*%.2f=%.2f",a,b,a*b);
    }
    else
    {
        printf("%.2f/%.2f=%.2f",a,b,a/b);
        
    }
        
    }
  
int main()
{
    
    char islem;
    printf("hangi islemi istiyorsun?(+ - * /)\n");
    scanf("%c",&islem);
    
    float a;
    float b;
    printf("lutfen iki değer giriniz;\n");
    scanf("%f%f",&a,&b);

    dortislem(a,b,islem);
   
    return 0;
}
