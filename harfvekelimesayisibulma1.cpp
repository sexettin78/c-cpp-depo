#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main(){
	int ksayi=1,harfsayi=0,i=0;
	string giris = "yeraltinda ayna var sözlerinden bellidir" ;
	//cout << "giris:" ;
	//cin >> giris;
	for(i=0;i<int(giris.length());i++){
		
		if(isalpha(giris[i])!=0){
			harfsayi++;
		}
		if(isspace(giris[i])!=0){
			ksayi++;
		}
	}
	
	cout << "\nkelime sayisi:" << ksayi << "\tharf sayisi:" << harfsayi << endl;
}
