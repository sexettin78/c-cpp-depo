#include <stdio.h>
#include <stdlib.h>
int main() {

	int s = 1;
	printf("sayi giriniz: [cikmak icin 0\'a basiniz] \n");
	scanf("%d", &s);
	if(s == 0) {
		printf("cikis yapildi");
	}
	else {
		printf("%d", s*s);
	}
		
	

}
