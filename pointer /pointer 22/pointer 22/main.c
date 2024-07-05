//
//  main.c
//  pointer 22
//
//  Created by Ecem Aydın on 1.04.2023.
//

#include <stdio.h>
void  diziyeAdresAta(int arr[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        arr[i]=&arr[i];
    }
}
int main()
{
    int arr[100];
    int *ptr;
    diziyeAdresAta(arr,100);
    return 0;
}
