#include <iostream>
#include "fakt.h"
using namespace std;
int main(){
	int n;
	cout << "faktoriyeli al�nacak sayi: ";
	cin >> n;
	cout << n << "!=" << faktoriyel(n);
}
