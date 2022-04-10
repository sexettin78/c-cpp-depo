#include <iostream>
using namespace std;
int main() {
	int n, fakt= 1;
	cout << "faktoriyeli alinacak sayi:";
	cin >> n;
	int i=n;
while(i>=1)
	{
		fakt = fakt*i;
		i--;
	}
 cout << n << "!=" << fakt;
}
