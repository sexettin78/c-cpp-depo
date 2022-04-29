#include <iostream>
using namespace std;
void karar(int x){
	if(x%2==0) {
		cout << "\ncift";
	}
	else{
		cout << "\ntek";
	}
}

int main(){
	int *sayi,giris;
	cin >> giris;
	karar(giris);
	sayi = &giris;
	cout << "\nadresi:" << &sayi;
}
