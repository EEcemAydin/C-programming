//
//  main.c
//  matris 3
//
//  Created by Ecem Aydın on 3.03.2023.
//

#include <stdio.h>

int main()
{
    int matris[3][3];
    int transpoz[3][3];
    int satir=0,sutun=0;
    for (satir=0; satir<3; satir++)
    {
        for (sutun=0; sutun<3; sutun++)
        {
            printf("matris[%d][%d]",satir+1,sutun+1);
            scanf("%d",&matris[satir][sutun]);
            transpoz[satir][sutun]=matris[satir][sutun];
        }
    }
    printf("matris:\n");
    
    for (satir=0; satir<3; satir++)
    {
        for (sutun=0; sutun<3; sutun++)
        {
            printf("%d",matris[satir][sutun]);
        }
        
        printf("sutun:\n");
        
        
        for (sutun=0; sutun<3; sutun++)
        {
            printf("%d",transpoz[satir][sutun]);
            
        }
            
        }
        return 0;
    }
