#include <iostream>
using namespace std;
int main(){

int i,po = 0,ne=0,sf=0,b=0,sayi=0;
cout << "Sayi adedi: "; 
cin >> b; 
	for(i=1; i<=b; i++){
		cin >> sayi;
		if(sayi>0){
			po++;
		}
		else if(sayi<0){
			ne++;
		}
		else{
			sf++;
		}
	}
	cout << "Pozitif: " << po << "\n" << "Negatif: " << ne << "\n" << "Sýfýr: " << sf;
}
