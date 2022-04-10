#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n, fakt= 1;
	printf("faktoriyeli alinacak sayi:");
	scanf("%d", &n);
	for(i=n; i>=1; i--){
		fakt = fakt*i;
	}
	printf("%d != %d" , n, fakt);
}
