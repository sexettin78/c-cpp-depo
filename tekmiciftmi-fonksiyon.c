#include <stdio.h>
#include <stdlib.h>

void karar(int);
int main() {
	int sayi;
	printf("say� gir:");
	scanf("%d", &sayi);
	karar(sayi);
}
void karar(int sayi) {
	if(sayi%2==0){printf("�ift");}
	else{printf("tek");}
}
