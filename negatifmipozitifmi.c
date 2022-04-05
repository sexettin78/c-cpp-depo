#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi;
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
		if(sayi > 0) 
			printf("pozitif");
	
	else if(sayi < 0) {
			printf("Negatif");
	}
	else {
		printf("Sayý 0\'a eþit");
	}
}
