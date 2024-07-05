#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
void  morse2bahr(char morse[],char *bahr)
{
   int i;
   for ( i = 0; morse[i]!='\0'; i++)
   {
     if(morse[i]=='-')
     {
       strcat(bahr ,"da");
     }
     else if(morse[i]=='.')
     {
        strcat(bahr,"di");
        
     }
     else if(morse[i]==' ')
     {
        strcat(bahr," ");
     }
   }
    
}
int main()
{
    char morse [100];
    char bahr[210];
    printf("morse kodunu giriniz:");
    fgets(morse,100,stdin);
    morse2bahr(morse,bahr);
    puts(bahr);
    return 0;
}