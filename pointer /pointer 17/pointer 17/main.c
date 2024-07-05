//
//  main.c
//  pointer 17
//
//  Created by Ecem Aydın on 28.03.2023.
//

#include <stdio.h>
#include <math.h>
float noktakaydir(float *x,float *y,int yatay,int dusey)
{
    float uzaklık;
    float a,b;
    a=*x-yatay;
    b=*y-dusey;
    uzaklık=sqrtf(pow(a, 2)+pow(b, 2));
    *x=fabsf(*x+yatay);
    *y=fabsf(*y+dusey);
    return uzaklık;
}
int main()
{
    float x=2.5;
    float y=2.5;
    float msf;
    int yatay=5;
    int dusey=4;
    msf=noktakaydir(&x,&y,yatay,dusey);
    printf("%.2f,%.2f,%.2f",x,y,msf);
    
    return 0;
}
