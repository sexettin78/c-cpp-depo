#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b, carp;
    printf("a değerini giriniz: ");
    scanf("%d",&a);
    printf("b değişkenini giriniz: ");
    scanf("%d",&b);
    carp = a*b;
    printf("%d*%d=%d", a, b, carp);
    getch();
}
