//
//  main.c
//  if else 2016 quiz
//
//  Created by Ecem Aydın on 21.10.2022.
//

#include <stdio.h>

int main() {
    printf("lutfen iki sayi aliniz\n");
    int a;
    int b;
    scanf("%d%d",&a,&b);
    
    int k;
    k=a+b;
    
    int n;
    n=a-b;
    
    int m;
    m=b-a;
    
    if(a%2==1 && b%2==1)
    {
        printf("sonuc:%d\n",k);
    }
    
    else if (a%2==1 && b%2==0)
    {
        printf("sonuc:%d\n",n);
    }
    
    else if(a%2==0 && b%2==1)
    {
        printf("sonuc:%d\n",m);
    }
    
    else
    {
        printf("sonuc%d\n",k);
    }
    return 0;
}
