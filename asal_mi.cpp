//
//  asal_mi.cpp
//  fonksiyon ile asalmi degil mi
//
//  Created by Eon147 10.12.2022
//
#include <stdio.h>

int asal_mi(int sayi){
	int i;
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	printf("Sayiyi gir:");
	int s1;
	scanf("%d",&s1);
	
	if(asal_mi(s1)==0){
		printf("\nSayi asal degil.");
	}
	else{
		printf("\nSayi asal.");
	}
}