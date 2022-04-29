#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char tr[][10] = {"ilkbahar","yaz","sonbahar","kis"};
	char en[][10] = {"spring","summer","autumn","winter"};
	char mevsim[10];
	cout << "mevsim giriniz: " ;
	cin >> mevsim;
	int i=0,s;
	for(i=0;i<4;i++){
		s = strcmpi(mevsim,tr[i]);
		if(s==0){
			cout << en[i];
		}
	
	}
	
	
	
	 
}
