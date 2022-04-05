#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int sayi1, sayi2;
	float sonuc;
	char islem;
	cout << "ilk sayý: ";
	cin >> sayi1;
	cout << "\nikinci sayý: ";
	cin >> sayi2;
	cout << "\niþlem operatörü giriniz: ";
	cin >> islem;
	switch(islem) {
		case '*': 
		{
			sonuc = sayi1*sayi2;
			cout << sonuc;
		} break;
		
				case '/': 
		{
			sonuc = (float)sayi1/sayi2;
			cout << sonuc;
		} break;
		
				case '-': 
		{
			sonuc = sayi1-sayi2;
			cout << sonuc;
		} break;
		
		
				case '+': 
		{
			sonuc = sayi1+sayi2;
			cout << sonuc;
		} break;
	}
}
