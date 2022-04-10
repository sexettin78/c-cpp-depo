#include <stdio.h>
#include <stdlib.h>
int main() {
	int s = 0; int t = 0;
	while (s < 5)
	{
		s = s+1;
		t = t+s;
		
	}
	printf("%d", t);
}
