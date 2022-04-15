#include <iostream>
int main() {
	using namespace std;
	int i = 6, k, s;
for(i=6; i>0; i--)
{
	for(int k=i; k>=1; k--){
		cout << "*";
		for(s=k; s<5; s++){
			cout << "$"; 
		}
		cout << "*";
	}
	cout << endl;
	}	
	
}
