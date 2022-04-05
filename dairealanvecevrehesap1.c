#include <stdio.h>
#include <stdlib.h>
int main() {
// Alan = pi*r*r  // r = 3
// cevre = 2*pi*r //pi = 3.14
double alan, cevre;
float const pi = 3.14;
int r = 3;
alan = pi*r*r;
cevre = 2*pi*r;
printf("Alan: %.2f \n Çevre: %.2f", alan, cevre) ;	
}
