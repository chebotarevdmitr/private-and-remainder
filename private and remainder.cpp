// private and remainder.cpp 
#include<iostream>

int main() {
	std::cout << "Warmup:  private and remainder." << std::endl;   //chastnoe i ostatok

	int  divisible = 0, divider = 0, privat = 0, remainder = 0;
	std::cout << "\t input intenger divisible end divider: ";  //vvesti celoe delimoe i delitel
	std::cin >> divisible >> divider;

	privat     =    divisible  /  divider;
	remainder  =    divisible  %  divider;
	std::cout << " private= " << privat << ",remainder = " << remainder << std::endl;

	return 0;

}