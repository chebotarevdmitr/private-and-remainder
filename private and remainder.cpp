// private and remainder.cpp 
#include<iostream>
using namespace std;

int main() {
	cout << "Warmup: chastnoe i ostatok" << endl;
	int a = 0, b = 0, chastnoe = 0, ostatok = 0;
	cout << "\t input intenger A end B: ";
	cin >> a >> b;
	chastnoe = a / b;
	ostatok = a % b;
	cout << "chastnoe= " << chastnoe << ", ostatok= " << ostatok << endl;
	return 0;

}