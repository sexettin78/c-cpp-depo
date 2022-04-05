#include <stdlib.h>
#include <stdio.h>
int main() {
	printf("Not gýrýnýz: ");
	int not;
	scanf("%d", &not);
	switch(not){
		case 90 ... 100:
		printf("AA"); break;
				case 80 ... 89:
		printf("BA"); break;
				case 70 ... 79:
		printf("BB"); break;
		
		case 0 ... 50:
		printf("FF"); break;
		default:
			printf("sýkýntý");
	}
	
}

