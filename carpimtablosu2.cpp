#include <iostream>
using namespace std;
int main() {
	int i,j,cizgi=0;
	cout << "1 \t 2 \t 3 \t 4 \t 5 \t 6 \t 7 \t 8 \t 9 \t 10 \t" << endl;
	while(cizgi<=80){cout << "-"; cizgi++;} cout << "\n";
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++)
		{
			cout << i*j << "\t";
		}
		cout << endl;
	}
}
