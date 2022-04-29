#include <stdio.h>
#include <stdlib.h>
int main(){
	int *pr=NULL,n,i;
	printf("Dizi boyutu giriniz:");
	scanf("%d",&n);
	pr =(int*) malloc(sizeof(int)*n);
	
	
	for(i=0;i<n;i++){
		pr[i] = i*2;
		printf("\n%d ",pr[i]);
	}
	free(pr);
	pr = NULL;
	printf("\nPR SILINDI. DEGERI:%d ",pr);
}
