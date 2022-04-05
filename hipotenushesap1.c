#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	printf("Kenarlarý giriniz ");
	scanf("%d %d", &a, &b);
	c = sqrt(a*a + b*b);
	printf("Hipotenüs: %d", c);
}
