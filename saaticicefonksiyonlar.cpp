#include <iostream>
using namespace std;
int main() {
	int saniye = 0, dakika = 0, saat;
	cout << "saat \t dk \t sn"<<endl;
	for(saat=0; saat <=24; saat++){
			for(dakika=0; dakika <=60; dakika++){
				for(saniye=0; saniye <=60; saniye++){
				cout << " " << saat << " \t " << dakika << " \t " << saniye << endl; 
				if(saniye==3) break; 
			}
			
		    if(dakika==1) break;
		}
		if(saat==1) break;
	}
	
}
