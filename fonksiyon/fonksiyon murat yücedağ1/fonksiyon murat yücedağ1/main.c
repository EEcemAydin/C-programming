//
//  main.c
//  fonksiyon murat yücedağ1
//
//  Created by Ecem Aydın on 3.12.2022.
//

#include <stdio.h>

int toplam(int s1, int s2)
{
    int toplam;
    toplam= s1+ s2;
    return toplam;
}

int main()
{
    int t;
    t=toplam(3,2);
    printf("toplam: %d\n",t);
    
    t=toplam(5,7);
    printf("toplam: %d\n",t);
    return 0;
}
