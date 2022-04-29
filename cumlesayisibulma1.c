#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
//	printf("giris:");
	char giris[] = "tessst. sa. test agam.";
	char * pch;
	int i=0,nokta;
	pch = strtok(giris,".");
		while(pch!=NULL){
			pch=strtok(NULL,".");
			nokta++;
		}
	printf("Cumle sayisi: %d",nokta);
}
