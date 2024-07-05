//
//  main.c
//  asdfgh
//
//  Created by Ecem Aydın on 17.10.2022.
//

#include <stdio.h>

int main()
{
        printf("lutfen saniye giriniz\n");
        int saat;
        int dakika;
        int saniye;
        scanf("%d",&saniye);

        saat=(saniye/3600);
        saniye=saniye%3600;

        dakika=(saniye/60);
        saniye=saniye%60;


        printf("%d\n%d\n%d",saat,dakika,saniye);
        return 0;
}
