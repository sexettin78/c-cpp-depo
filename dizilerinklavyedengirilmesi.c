#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[5];
	int i,giris;
	
	for(i=0;i<5;i++){
		printf("rakam giriniz>");
		scanf("%d",&giris);
		a[i] = giris;
	}
	
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	
}
