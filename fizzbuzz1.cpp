#include <iostream>
using namespace std;

void fizzbuzz() {
		int s=1;
	for(s=1;s<=100;s++){
		if(s % 15 == 0){
			cout << "fizzbuzz ";
		}
		else if(s % 3 ==0){
			cout << "fizz ";
		}
		else if(s % 5 == 0){
			cout << "buzz ";
		}

		else{
		cout << s << " ";
		}
}}

int main() {
fizzbuzz();
	}

