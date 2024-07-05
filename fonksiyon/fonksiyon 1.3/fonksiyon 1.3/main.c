//
//  main.c
//  fonksiyon 1.3
//
//  Created by Ecem Aydın on 26.11.2022.
//

#include <stdio.h>



    void islem (int sayi)
    {
        if(sayi%2==0)
        {
            printf("sayi cifttir\n");
                
        }
        
        else
        {
            printf("sayi tektir");
        }
    }
    
    
    
    
    int main()
{
    int sayi;
    printf("lutfen sayi giriniz\n");
    scanf("%d",&sayi);
    islem(sayi);
    
        return 0;
            
}
