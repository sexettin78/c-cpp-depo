#include <iostream>
using namespace std;
int main() {
	int sayi;
	cout << "sayi giriniz: ";
	cin >> sayi;
	if(sayi > 0) {
		cout << "pozitif";
	} 
	else if(sayi < 0) {
		cout << "Negatif";
	}
	else {
		cout << "Say� 0\'a e�it";
	}
}
