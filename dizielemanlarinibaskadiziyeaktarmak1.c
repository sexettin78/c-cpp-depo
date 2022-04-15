#include <stdio.h>
#include <stdlib.h>

int main(){
	char A[] = {'a','b','c','d','e','f','g','h','i','j'};
	char B[10];
	int i;
	for(i=0;i<10;i++){
		B[i] = A[9-i];
		printf("%c ", B[i]);
	}
}
