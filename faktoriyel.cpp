//
//  main.cpp
//  Fonksiyon ile faktoriyel alma
//
//  Created by Eon147 10.12.2022
//


#include <stdio.h>

int factorial(int sayi){
	int sonuc=1;
	for(;sayi>0;sayi--){
		sonuc*=sayi;	
	}
	return sonuc;
}

int main(){
	printf("Faktorialini almak istediginiz sayiyi giriniz:");
	int s1;
	scanf("%d",&s1);
	
	printf("%d",factorial(s1));
}
