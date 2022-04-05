#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sayi=17;
    char str[10];
    printf("%s \n", itoa (sayi, str, 2));
	printf("%s \n", itoa (sayi, str, 8));
    printf("%s \n" , itoa (sayi, str, 16));
    getch();
}
