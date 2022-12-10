//
//  otomat.cpp
//  otomat
//
//  Created by Eon147 2.12.2022
//
#include <stdio.h>

int main(){
    int secim,bakiye=100;
    
    printf("Secenekler\n1-Soguk icecek\n2-Yemekler\n3-Tatli\n4-Kahve\n");
get:
    //1=10TL 2=50TL 3=15TL 4=10TL
    scanf("%d",&secim);
    
    switch (secim) {
        case 1:
            printf("\n1-Soguk icecek\nTutar 10TL");
            
            if(bakiye<10){
                printf("\nBakiyeniz yetersiz");
            }
            else{
                bakiye=bakiye-10;
                printf("\nKalan bakiyeniz %d",bakiye);
            }
            
            break;
            
        case 2:
            printf("\n2-Yemekler\nTutar 50TL");
            
            if(bakiye<50){
                printf("\nBakiyeniz yetersiz");
            }
            else{
                bakiye=bakiye-50;
                printf("\nKalan bakiyeniz %d",bakiye);
            }
            break;
            
        case 3:
            printf("\n3-Tatli\nTutar 15TL");
            
            if(bakiye<15){
                printf("\nBakiyeniz yetersiz");
            }
            else{
                bakiye=bakiye-15;
                printf("\nKalan bakiyeniz %d",bakiye);
            }
            break;
            
        case 4:
            printf("\n4-Kahve\nTutar 10TL");
            
            if(bakiye<10){
                printf("\nBakiyeniz yetersiz");
            }
            else{
                bakiye=bakiye-10;
                printf("\nKalan bakiyeniz %d",bakiye);
            }
            break;
            
        default: printf("\n yanlis tusladiniz\nLutfen tekrar giriniz\n");
            goto get;
            break;
    }
    
    
    return 0;
}


