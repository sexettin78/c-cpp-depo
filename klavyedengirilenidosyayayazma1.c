#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	FILE *dosya;
	char yazi[100];
	gets(yazi);
	dosya = fopen("metinc.txt","a");
	fprintf(dosya,"%s\n",yazi);
	fclose(dosya);
}
