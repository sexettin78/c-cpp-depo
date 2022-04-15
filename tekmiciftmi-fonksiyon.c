#include <stdio.h>
#include <stdlib.h>

void karar(int);
int main() {
	int sayi;
	printf("sayý gir:");
	scanf("%d", &sayi);
	karar(sayi);
}
void karar(int sayi) {
	if(sayi%2==0){printf("çift");}
	else{printf("tek");}
}
