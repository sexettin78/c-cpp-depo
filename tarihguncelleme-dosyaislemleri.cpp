#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

	struct tarih{
		int gun;
		int ay;
		int yil;
	};

int main(){
tarih bugun = {28,04,2022};
bugun.gun = 29;
cout << bugun.gun;
}
