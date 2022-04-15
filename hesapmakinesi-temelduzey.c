#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int a,b,op,dongu = 0;
	float sonuc;
	int sss;
		setlocale(LC_ALL, "Turkish");
		printf("[1] Toplama \n");
	printf("[2] Çýkarma \n");
	printf("[3] Çarpma \n");
	printf("[4] Bölme \n");
	while(dongu<1){
	printf("\nilk sayýyý giriniz: ");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &b);
	printf("islem numarasi giriniz: ");
	scanf("%d",&op);
	switch(op) {
		case 1: sonuc = a+b; break;
		case 2: sonuc = a-b; break;
		case 3: sonuc = a*b; break;
		case 4: sonuc = a/b; break;
	}
	printf("Sonuç: %f", sonuc);
	printf("\nDevam edilsin mi 0/1: ");
	scanf("%d", &sss);
	if(sss == 0){dongu++;}	
}
	
}
