#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int aded=0,sayi1,sayi2,s1 = 0;
	
	sayi1 = rand()%100;
	sayi2 = rand()%100;
	if(sayi1<sayi2){
	for(sayi1;sayi1<=sayi2,sayi1++;){
		aded++;
		if(sayi1 % 2 == 0){
			printf(" %d ",sayi1);
		}
	}

	}	
	else{
			for(sayi2;sayi2<=sayi1,sayi2++;){
		aded++;
		if(sayi2 % 2 == 0){
			printf(" %d ",sayi2);
		}
	}}
	printf("\nAdedi: %d", aded);
}
