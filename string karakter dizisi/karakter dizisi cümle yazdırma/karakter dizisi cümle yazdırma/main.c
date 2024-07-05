//
//  main.c
//  karakter dizisi cümle yazdırma
//
//  Created by Ecem Aydın on 7.04.2023.
//

#include <stdio.h>

int main() {
    char cümle[100];
    fgets(cümle, 100, stdin);
    puts(cümle);
    return 0;
}
