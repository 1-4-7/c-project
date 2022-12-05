//
//  main.cpp
// 1/2 - 2/3 + 3/4 4/5 .....10/11=?
//
//  Created by Eon147 5.12.2022.
//


#include <stdio.h>

int i;
float a,b;
main(){
	i=1;
	a=0;
	while(i<=10){
		b=i;
		if(i%2==1){
			printf("%d/%d -",i,i+1);
			a=a-(b/(b+1));
		}
		else{
			printf("%d/%d +",i,i+1);
			a=a+(b/(b+1));
		}
		i=i+1;
	}
	printf("sonuc:%2.5f",a);
}