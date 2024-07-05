//
//  main.c
//  fonk murat yücedağ 2
//
//  Created by Ecem Aydın on 3.12.2022.
//

#include <stdio.h>

int kup(int sayi)
{
    int sonuc= sayi * sayi * sayi;
    return sonuc;
    
}


int main()
{
    int a;
    printf("lutfen sayi giriniz:\n");
    scanf("%d",&a);
    printf("sonuc:%d\n",kup(a));
    return 0;
}
