#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
	int s=0,i;
	int kalan=0,gecen=0;
	srand((int) time(0));
	int notlar[15];
	cout << "Notlar:";
	for(s=0;s<=15;s++){
		notlar[i] = rand()%100;
		cout << notlar[i] << " ";
		if(notlar[i]>49){	gecen++;}
		else{kalan++;}}
		cout << endl << "Kalan sayisi:" << kalan << endl << "Gecen sayisi:" << gecen << endl;}
