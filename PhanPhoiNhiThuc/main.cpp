#include <iostream>
#include <iomanip>
#include "Menu.h"
#include "Binomial.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Menu menu;
	
	menu.Print();
	
	Binomial bin;
	
	int n, k;
	double p;
	std::cin >> n >> k >> p;
	
	bin.setN(n);
	bin.setK(k);
	bin.setP(p);
	
	std::cout << bin.getFraction(n) << '\n';
	std::cout << bin.getC(n, k) << '\n';
	
//	std::setprecision(4);
	
	std::cout << "P(X = x) = " << bin.getProbability() << '\n';
	
	
	return 0;
}
