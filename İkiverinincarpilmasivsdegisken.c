#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b, carp;
    printf("a de�erini giriniz: ");
    scanf("%d",&a);
    printf("b de�i�kenini giriniz: ");
    scanf("%d",&b);
    carp = a*b;
    printf("%d*%d=%d", a, b, carp);
    getch();
}
