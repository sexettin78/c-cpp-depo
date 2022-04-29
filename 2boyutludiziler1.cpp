#include <iostream>
using namespace std;
int main() {
	int B[3] [5] = {{1,2,3,4,5}, {5,6,7,8,9}, {0,1,2,3,4}};
	int i,j;
	
	for(i=0; i<3;i++){
		
		for(j=0;j<5;j++){
			cout << B[i] [j] ;
		}
		cout << endl;
	}
	
}
