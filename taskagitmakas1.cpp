#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(0));
	char ch='H';
	int kazan=0,beraber=0,kayip=0,secimim,pc;
	
	do{
		pc=(int)(rand() % 3)+1;
		cout << "TA� KA�IT MAKAS OYUNUNA HO�GELD�N�Z!" << endl;
		cout << "Se�enekler:" << endl << "[1]Ta�" << endl << "[2]Ka��t" << endl << "[3]Makas" << endl;
		cout << "Se�iminizi yap�n�z >";
		cin >> secimim;
		
		if(secimim==pc){
			cout << "Berabere!\n";
		beraber++;
		}
		else if(secimim == 1 && pc==2 ){ cout << "Ka��t, ta�� sarar! Kaybettin!"<< endl; kayip++;}
		else if(secimim == 2 && pc==3 ){ cout << "Makas, ka��d� keser! Kaybettin!"<< endl; kayip++;}
		else if(secimim == 3 && pc==1 ){ cout << "Ta�, makas� ezer! Kaybettin!"<< endl; kayip++;}
		else if(secimim == 1 && pc==3 ){ cout << "Ta�, makas� ezer! Kazand�n!"<< endl; kazan++;}
		else if(secimim == 2 && pc==1 ){ cout << "Ka��t, ta�� sarar! Kazand�n!"<< endl; kazan++;}
		else if(secimim == 3 && pc==2 ){ cout << "Makas, ka��d� keser! Kazand�n!"<< endl; kazan++;}
			
			
		cout << "Oyuna devam etmek ister misiniz> (E/H)";
		cin >> ch;
	}
	while(ch=='E' || ch=='e');
	cout << endl << "Kazanma say�s�:" << kazan << endl << "Beraberlik say�s�:" << beraber << endl << "Kaybetme say�s�:" << kayip << endl;
}
