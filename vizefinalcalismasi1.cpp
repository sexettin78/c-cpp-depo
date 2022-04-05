#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main() {
	int vize, final;
	double sonuc = 0;
	cout << "Vize: ";
	cin >> vize;
	cout << "Final: ";
	cin >> final;
	sonuc = (vize+final)/2;
	cout << "Sonuç: " << sonuc;	
}
