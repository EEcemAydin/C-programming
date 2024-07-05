//
//  main.c
//  matris 10
//
//  Created by Ecem Aydın on 8.03.2023.
// zor mu berkay altunyay

#include <stdio.h>


//4. sütun ortalama ,5. sütun kaldığı ders sayısını tutuyor.
void control(float arr[5][5])
{
    int i,j;
    for (i=0; i<5; i++)
    {
        for (j=0; j<3; j++)
        {
            if(arr[i][j]<=40)
            {
                arr[i][4]++;
            }
            
            else if(arr[i][j]>=41 &&  arr[i][j]<=59)
            {
                if(arr[i][3]<60)
                {
                    arr[i][4]++;
                }
            }
            
        }
    }
}
int main( )
{
    float arr[5][5];
    int i ;
    
    for (i=0; i<5; i++)
    {
        printf("%d. ögrencinin notları:",i+1);
        scanf("%f%f%f",&arr[i][0],&arr[i][1],&arr[i][2]);
        arr[i][3]=(arr[i][0]+arr[i][1]+arr[i][2])/3;
        arr[i][4]=0;
    }
    control(arr);
    printf("kalınan ders sayısı:\n");
    for (i=0; i<5; i++)
    {
        printf("%d. ogrencinin kaldığı ders sayısı:%.f\n",i+1,arr[i][4]);
    }
    return 0;
}
