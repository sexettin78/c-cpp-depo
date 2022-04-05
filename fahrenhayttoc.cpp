#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main() {
    int f;
    float c;
    cout << "F deðerini giriniz: " ;
    cin >> f;
    c = (float) (f-32)/1.8;
    cout << "C= "<< setprecision(4) << c;
	getch();
}

