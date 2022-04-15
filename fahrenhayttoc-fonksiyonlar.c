#include <stdio.h>
#include <stdlib.h>
double cevir(double n){
	   return ((n-32)/1.8);
}

int main()
{
    int f;
    float c;
    printf("f deðerini giriniz: ");
    scanf("%d",&f);
	c = cevir(f);
    printf("%.2f", c);
    getch();
}
