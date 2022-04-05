#include <iostream>
using namespace std;
int main() {
	int yas = 0;
	cout << "yasi giriniz: ";
	cin >> yas;
	switch (yas){
	
	case 0 ... 2:
		cout << "bebeklik"; break;
	
	case 3 ... 12:
		cout << "cocukluk"; break;	
	
	
		case 13 ... 17:
		cout << "ergenlik"; break;
		default:cout << "sýkýntý";
	}
}
