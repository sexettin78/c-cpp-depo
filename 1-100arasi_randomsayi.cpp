#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand((int) time(0));
	int d=1,sayi;
	for(d=1; d<=10; d++){
		sayi = rand()%100;
		cout << sayi<<endl;
	}
	
}
