//
//  main.c
//  string c prog 13.34
//
//  Created by Ecem Aydın on 18.04.2023.
//

#include <stdio.h>
#include <string.h>
void seslisessizsay(char cümle[],int a,int *seslisay,int *sessizsay)
{
    int i;
    *seslisay=0;
    *sessizsay=0;
    for (i=0; i<a; i++)
    {
        if(cümle[i]=='a'||cümle[i]=='e'||cümle[i]=='i'||cümle[i]=='o'||cümle[i]=='u'||cümle[i]=='A'||cümle[i]=='E'|| cümle[i]=='I'||cümle[i]=='U'||cümle[i]=='O')
        {
            *seslisay+=1;
        }
        else if (cümle[i]!=' ')
        {
            
            *sessizsay+=1;
        }
    }
}
int main()
{
    char cümle[100];
    printf("cümleyi giriniz:");
    fgets(cümle, 100, stdin);
    int a,b=0,c=0;
    a=strlen(cümle);
    seslisessizsay(cümle,a,&b,&c);
    printf("girilen cümlede %d sesli,%d sessiz harf bulunmaktadır.\n",b,c-1);
    
    return 0;
}
