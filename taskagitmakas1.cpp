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
		cout << "TAÞ KAÐIT MAKAS OYUNUNA HOÞGELDÝNÝZ!" << endl;
		cout << "Seçenekler:" << endl << "[1]Taþ" << endl << "[2]Kaðýt" << endl << "[3]Makas" << endl;
		cout << "Seçiminizi yapýnýz >";
		cin >> secimim;
		
		if(secimim==pc){
			cout << "Berabere!\n";
		beraber++;
		}
		else if(secimim == 1 && pc==2 ){ cout << "Kaðýt, taþý sarar! Kaybettin!"<< endl; kayip++;}
		else if(secimim == 2 && pc==3 ){ cout << "Makas, kaðýdý keser! Kaybettin!"<< endl; kayip++;}
		else if(secimim == 3 && pc==1 ){ cout << "Taþ, makasý ezer! Kaybettin!"<< endl; kayip++;}
		else if(secimim == 1 && pc==3 ){ cout << "Taþ, makasý ezer! Kazandýn!"<< endl; kazan++;}
		else if(secimim == 2 && pc==1 ){ cout << "Kaðýt, taþý sarar! Kazandýn!"<< endl; kazan++;}
		else if(secimim == 3 && pc==2 ){ cout << "Makas, kaðýdý keser! Kazandýn!"<< endl; kazan++;}
			
			
		cout << "Oyuna devam etmek ister misiniz> (E/H)";
		cin >> ch;
	}
	while(ch=='E' || ch=='e');
	cout << endl << "Kazanma sayýsý:" << kazan << endl << "Beraberlik sayýsý:" << beraber << endl << "Kaybetme sayýsý:" << kayip << endl;
}
