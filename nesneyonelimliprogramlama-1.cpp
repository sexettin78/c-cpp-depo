#include <string>
#include <iostream>
using namespace std;
//araba s�n�f�
class araba{
	string marka;
	string renk;
	int motor;
	int kapasite;
	
	public:
		void calis(string ma,string r,int m,int k){
			marka=ma;
			renk=r;
			motor=m;
			kapasite=k;
		}
		void yaz(){
			cout << marka << "\t" << renk << "\t" << motor << "\t" << kapasite <<endl;
		}
};

int main(){
	//araba s�n�f�ndan nesneler t�ret
	araba kamyon, taksi;
	//veri giri�i-de�er aktarma
	kamyon.calis("Volvo","kirmizi",3000,9000);
	taksi.calis("Fiat-Doblo","Sari",1000,2500);
	//ekrana de�er yazd�rmak
	kamyon.yaz();
	taksi.yaz();
}
