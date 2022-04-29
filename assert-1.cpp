#include <cassert>
#include <iostream>
using namespace std;
int main(){
	cout << "ilk sayi:" ;
	int a,b;
	float c;
	cin >> a;
	cout << "\nikinci sayi:";
	cin >> b;
	assert(b!=0);
	c = a/b;
	cout << "\nSonuc:" << c;
}
