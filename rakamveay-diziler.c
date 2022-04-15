#include <stdio.h>
#include <stdlib.h>
int main() {
	char *ay[] = {"","ocak","subat","mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasým","aralýk"};
	int aysayi;
	printf("ay degeri giriniz:");
	scanf("%d",&aysayi);
	
	if(aysayi>0 && aysayi<13){
		printf("%s",ay[aysayi]);
	}
	else{
		printf("hatali giris");
	}
}
