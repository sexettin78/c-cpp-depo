#include <stdio.h>
#include <stdlib.h>
int main() {
	int s = 0;
	do {
		s++;
		if(s % 2 != 1) continue;
		printf("%d \t", s);
	}while(s<33);
}
