#include <stdio.h>
#include <stdlib.h>
int main() {
	float st=0.0;
	int n;
	printf("Terim sayýsýný giriniz:");
	scanf("%d", &n);
	for(int x=1; x<=n; x++)
	{
		st=st+(1.0/x);
	}
	
	printf("Seri toplamý: %f", st);
}
