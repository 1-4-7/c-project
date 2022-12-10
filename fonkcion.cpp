//Fonksiyon ile toplama cikarma islemi

#include <stdio.h>

//toplama
int top(int s1,int s2){  //Fonksiyon kullanimi
	int top;
	top=s1+s2;
	return top;
}
//cikarma
int fark(int s1,int s2){
	int top;
	top=s1-s2;
	return top;
}



int main(){
	int sayi1,sayi2;
	printf("iki sayi gir:");
	scanf("%d %d",&sayi1,&sayi2);
	
	printf("Sayilarin toplami :%d\n",top(sayi1,sayi2));
	printf("Sayilarin farki :%d",fark(sayi1,sayi2));

	
	
}
