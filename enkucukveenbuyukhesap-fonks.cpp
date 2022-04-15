#include <iostream>
#include <locale.h>
using namespace std;

	int enk(int, int);
	int enb(int, int);
	
int main() {
	setlocale(LC_ALL, "Turkish");
	int ilk,iki;
	cout << "ilk sayi:";
	cin >> ilk;
	cout << "ikinci sayi:";
	cin >> iki;
	cout << "en küçük > " << enk(ilk,iki) << endl;;
	cout << "en büyük > " << enb(ilk,iki); 
}


int enk(int x, int y) {
	if(x < y){
	return x;}
	else{
	return y;}
}

int enb(int x, int y){
	if(x > y){
	return x;}
	else{
	return y;}
}
