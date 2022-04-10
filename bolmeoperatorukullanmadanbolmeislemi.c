#include <stdio.h>
#include <stdlib.h>
int main() {
	int s1, s2, sayac=0;
	printf("ilk sayiyi giriniz: ");
	scanf("%d", &s1);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &s2);
	while(s1>=s2)
	{
		s1-=s2;
		sayac++;
			
	}
 	printf("sonuc: %d", sayac);
}


