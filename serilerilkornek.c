#include <stdio.h>
#include <stdlib.h>
int main() {
	float st=0.0;
	int x,i,n;
	printf("Terim say�s�n� giriniz:");
	scanf("%d", &n);
	for(x=1; x<=n; x++)
	{
		st=st+(1.0/x);
	}
	
	printf("Seri toplam�: %.4f", st);
}
