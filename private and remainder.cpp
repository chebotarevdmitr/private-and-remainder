// private and remainder.cpp 
#include<iostream>
#include<limits>

int main() {
	std::cout << "Warmup:  private and remainder." << std::endl;   //chastnoe i ostatok

	int  divisible = 0, divider = 0, privat = 0, remainder = 0;

	while (true)
	{
		std::cout << "\t input intenger divisible end divider: ";  //vvesti celoe delimoe i delitel
		if (!(std::cin >> divisible >> divider)) {
			std::cout << "Invalid input. Please enter valid integers for divisible and divider." << std::endl;
			//Ochistka potoka i sbros flaga oshibki
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (divider == 0) {
			std::cout << "Error: Division bu zero is not allowed.Please enter a non_zero value for divider." << std::endl;
			continue;
		}
		// vihod iz ciykla posle vvoda korrektnogo znacheniya delitelya
		break;
	}
	
	privat     =    divisible  /  divider;
	remainder  =    divisible  %  divider;
	std::cout << " private= " << privat << ",remainder = " << remainder << std::endl;

	return 0;

}