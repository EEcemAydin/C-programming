//
//  main.c
//  pointer 18
//
//  Created by Ecem Aydın on 29.03.2023.
//

#include <stdio.h>
void eleme(int dizi[],int n)
{
    int i,j;
    int control;
    for (i=0; i<9; i++)
    {
        control=0;
        for (j=1; j<9; j++)
        {
            if(i!=j)
            {
                if(dizi[i]==dizi[j])
                {
                    control=1;
                    break;
                }
                
            }
            
        }
       if(control==0)
       {
           dizi[i]=-1;
       }
    }
}
int main()
{
    int dizi[9]={1,120,4,6,12,25,6,6,120};
    int i;
    int aranan;
    eleme(dizi,9);
    for (i=0; i<9; i++)
    {
        printf("%d\n",dizi[i]);
    }
    
    
    return 0;
}
