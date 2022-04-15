#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int k[]={200,100,500,20,10,5,1};
int para,sa,i;
printf("Para miktari:");
scanf("%d",&para);

for(i=0;i<=6;i++){
	sa=(int)para/(k[i]);
	para=para-sa*k[i];
	
	if(sa!=0){
		printf("%d adet %d tl\n",sa,k[i]);
	}
	
	
}

}
