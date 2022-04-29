#include <stdio.h>
#include <stdlib.h>
int main() {
	int sa,su;
	int A[2] [2] = {{4,8},{3,7}};
	int B[2] [2] = {{1,0},{5,2}};
	int C[2] [2];
	for(sa=0; sa<2;sa++){
		for(su=0;su<2;su++){
			C[sa] [su] = A[sa] [su] + B[sa] [su];
			printf("%3d",C[sa] [su]);
		}
		
		printf("\n");
	}
	
}
