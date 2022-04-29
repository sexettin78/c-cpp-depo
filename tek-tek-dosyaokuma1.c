#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	FILE *dosya;
	char yazi[100];
	dosya = fopen("metinc.txt","r");
	while(!feof(dosya)){
		fscanf(dosya,"%s",&yazi);
		printf("%s\n",yazi);
	}
	fclose(dosya);
}
