#ifndef BINOMIAL_H
#define BINOMIAL_H

class Binomial
{
	private:
		int n;
		int k;
		double p;
	public:
		Binomial();
		
		int getN();
		int getK();
		double getP();
		void setN(int);
		void setP(double);
		void setK(int);
		
		long long getFraction(int);
		long long getC(int, int);
		
		double getProbability();
};

#endif
