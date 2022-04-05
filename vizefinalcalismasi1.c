#include <stdio.h>
#include <stdlib.h>
int main() {
	double sonuc=0;
	int vize, final;
	printf("Vize: ");
	scanf("%d", &vize);
	printf("Final: ");
	scanf("%d", &final);
	sonuc = (vize+final)/2;
	printf("Sonuç: %d", sonuc);
}
