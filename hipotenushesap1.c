#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	printf("Kenarlar� giriniz ");
	scanf("%d %d", &a, &b);
	c = sqrt(a*a + b*b);
	printf("Hipoten�s: %d", c);
}
