#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int sayi1, sayi2;
	float sonuc;
	char islem;
	cout << "ilk say�: ";
	cin >> sayi1;
	cout << "\nikinci say�: ";
	cin >> sayi2;
	cout << "\ni�lem operat�r� giriniz: ";
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
