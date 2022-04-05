#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
using namespace std;
int main() {
	int sayi=17;
	char str[10];
	cout << "ikili: " << itoa (sayi, str, 2) << endl;
	cout << "Sekizli: " << itoa (sayi, str, 8) << endl;
	cout << "On altýlý: " << itoa (sayi, str, 16) << endl;
	getch();
}
