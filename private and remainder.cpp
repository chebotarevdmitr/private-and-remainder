// private and remainder.cpp 
#include<iostream>
using namespace std;

int main() {
	cout << "Warmup:  private and remainder." << endl;   //chastnoe i ostatok

	int  divisible = 0, divider = 0, privat = 0, remainder = 0;
	cout << "\t input intenger divisible end divider: ";  //vvesti celoe delimoe i delitel
	cin >> divisible >> divider;

	privat     =    divisible  /  divider;
	remainder  =    divisible  %  divider;
	cout << " private= " << privat << ",remainder = " << remainder << endl;

	return 0;

}