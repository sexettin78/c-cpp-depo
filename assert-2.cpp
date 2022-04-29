#include <cassert>
#include <iostream>
using namespace std;
int main(){
	cout << "2-20 arasi sayi girin(asal olmasin) :" ;
	int sayi;
	cin >> sayi;
	assert(sayi!=2||sayi!=3||sayi!=5||sayi!=7||sayi!=11||sayi!=13||sayi!=17||sayi!=19);
	cout << "\ngirdigin sayi asal olmadigi icin program calisti";
}
