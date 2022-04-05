#include <stdio.h>
#include <stdlib.h>
int main()
{
    int f;
    float c;
    printf("f deðerini giriniz: ");
    scanf("%d",&f);
    c = (f-32)/1.8;
    printf("%.2f", c);
    getch();
}
