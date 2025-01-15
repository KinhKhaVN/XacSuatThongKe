#include "Binomial.h"
#include <iostream>
#include <math.h>

Binomial::Binomial()
{
	std::cout << "Chuong trinh PHAN PHOI NHI THUC!\n";
}

int Binomial::getN()
{
	return this->n;
}

int Binomial::getK()
{
	return this->k;
}

double Binomial::getP()
{
	return this->p;
}

void Binomial::setN(int n)
{
	this->n = n;
}

void Binomial::setP(double p)
{
	this->p = p;
}

void Binomial::setK(int k)
{
	this->k = k;
}

long long Binomial::getFraction(int n)
{
	int fract = 1;
	
	for (int i = 2; i <= n; ++i)
		fract *= i;
	
	return fract;
}

long long Binomial::getC(int n, int k)
{
	long long numerator = this->getFraction(n);
	long long denominator = this->getFraction(n - k) * this->getFraction(k);
	
	std::cout << "Tu: " << numerator << '\n';
	std::cout << "Mau: " << denominator << '\n';
	long long ans = numerator / denominator;
	
	return ans;
}

double Binomial::getProbability()
{
	int n = this->getN();
	int k = this->getK();
	double p = this->getP();
	double q = 1 - p;
	double prob = 0;
	
	long long C = this->getC(n, k);
	double pPow = pow(p, k);
	double qPow = pow(q, n - k);
	
	std::cout << "p: " << p << '\n';
	std::cout << "q: " << q << '\n';
	std::cout << "pPow: " << pPow << '\n';
	std::cout << "qPow: " << qPow << '\n';
	std::cout << "C: " << C << '\n';
	
	prob=  C*1.0 * pPow * qPow;
	
	return prob;
}


