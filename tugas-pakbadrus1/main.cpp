#include<iostream>
#include<string>
using namespace std;
int main(){
	string kata;
	int panjang;
	cout << "input string untuk mengetahui panjang : ";
	getline(cin,kata);
	cout << kata<<endl;
	panjang = kata.length();
	cout << "string.length = " <<panjang <<endl;
	panjang = kata.size();
	cout << "string.size = " << panjang <<endl;
}
