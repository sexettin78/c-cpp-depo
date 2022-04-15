#include <iostream>
using namespace std;
int main(){
	int sayi=0;
	int ilkdizi[10];
	for(sayi=0;sayi<=10;sayi++){
		ilkdizi[sayi] = sayi*sayi;
		cout << ilkdizi[sayi] << endl;
	}
}
