#include <string>
#include <iostream>
using namespace std;
//araba sýnýfý
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
	//araba sýnýfýndan nesneler türet
	araba kamyon, taksi;
	//veri giriþi-deðer aktarma
	kamyon.calis("Volvo","kirmizi",3000,9000);
	taksi.calis("Fiat-Doblo","Sari",1000,2500);
	//ekrana deðer yazdýrmak
	kamyon.yaz();
	taksi.yaz();
}
