#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct kutu
    {
        float uzunluk;
        float yükseklik;
        float genislik;
    };
    int i=0,j,control=1;
    struct kutu kutular[100];
    while(control==1)
    {
        printf("%d. Kutu uzunluk giriniz: ",i+1);
        scanf("%f",&kutular[i].uzunluk);
        printf("%d.kutu yüksekliğini giriniz: ",i+1);
        scanf("%f",&kutular[i].yükseklik);
        printf("%d.kutu genişliğini giriniz: ",i+1);
        scanf("%f",&kutular[i].genislik);
        printf("başka kutu girmek için 1'e basınız:");
        scanf("%d",&control);
        printf("\n");
        i++;
    }
    for ( j = 0; j<i; j++)
    {
        float hacim=kutular[j].uzunluk*kutular[j].yükseklik*kutular[j].genislik;
        printf("%d,kutunun [uzunluğu] %-10.2f [yüksekliği] %-10.2f [genişliği] %-10.2f [hacim] %-10.2f\n",j+1,kutular[j].uzunluk,kutular[j].yükseklik,kutular[j].genislik,hacim);
        
    }
    

    return 0;
}