#include <stdio.h>
#include <string.h>
int main()
{
    printf("ad soyad numara not bilgisi giriniz\n");
    char veri[5][100];
    char ad[5][20];
    char soyad[5][20];
    int numara[5];
    int not[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        fgets(veri[i],100,stdin);
    }
    for ( i = 0; i <5;  i++)
    {
      sscanf(veri[i],"%s %s %d %d",ad[i],soyad[i],&numara[i],&not[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        if(not[i]>=50)
        {
            printf("%d%10d\n",numara[i],not[i]);
        }
        
    }
    
    



    return 0;
}