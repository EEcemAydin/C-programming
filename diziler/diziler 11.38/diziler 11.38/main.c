//
//  main.c
//  diziler 11.38
//
//  Created by Ecem Aydın on 12.03.2023.
//

#include <stdio.h>
int icindeVarMi(int dizi1[],int dizi2[])
{
    int i;
    for (i=0; i<7; i++)
    {
        if(dizi2[0]==dizi1[i])
        {
            if(dizi2[1]==dizi1[i+1])
            {
                if(dizi2[2]==dizi1[i+2])
                {
                    return 1;
                    break;
                }
            }
        }
     }
    return 0;
}
int main()
{
    int dizi1[7]={3,12,1,12,7,3,12};
    int dizi2[3]={12,7,3};
    int c;
    c=icindeVarMi(dizi1,dizi2);
    printf("sonuç= %d",c);
    return 0;
}
