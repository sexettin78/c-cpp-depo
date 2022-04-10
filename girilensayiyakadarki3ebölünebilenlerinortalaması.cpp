#include <iostream>
using namespace std;
int main() {
	int sayi = 0, sayac=0;
	float formul, ort, t= 0;
	cout << "sayi giriniz: ";
	cin >> sayi;
	formul = (sayi-(sayi % 3));
	while(formul>0){
		cout << "sayi" << sayac+1 << ": " << formul << endl;
		t = t+formul;
		formul-=3;
		sayac+=1;
	}
	ort = t/sayac;
	cout << "ortalama: " << ort;	
}
