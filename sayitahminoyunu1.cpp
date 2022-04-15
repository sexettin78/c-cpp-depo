#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int tahmin,sayac=0,puan=100;
	srand(time(0));
	const int tut = (rand()%100);
	
	while(puan>0){
		sayac++;
		cout <<"\nPuan:" << puan << endl;
		cout << "tahmininizi giriniz: ";
		cin >> tahmin;

		if(tahmin==tut){
			cout << "\n Tebrikler, doğru tahmin!\n";
			cout << sayac << " tahminde bildiniz!";
			break;
		}
		
		else if(tahmin<tut){
			cout << "\nDaha büyük bir sayı gir";
			puan-=10;
		}
				else if(tahmin>tut){
			cout << "\nDaha kucuk bir sayı gir";
			puan-=10;
		}
		
		
	}
	
	
	
}
