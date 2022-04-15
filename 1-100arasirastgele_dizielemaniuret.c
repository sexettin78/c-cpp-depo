#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int boyut,eleman,i=0;
srand((int) time(0));
printf("Dizi boyutu giriniz:");
scanf("%d",&boyut);
int *dizi[boyut];
for(i=0;i<=boyut;i++){
	eleman = rand()%100;
	dizi[boyut] = eleman;
	printf("%d. eleman: %d\n",i,dizi[boyut]);	
}	

	
}
