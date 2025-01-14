#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>

#define ll long long
#define F first
#define S second
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define mp make_pair()
#define pb push_back

using namespace std;

int main () {
	
	std::string fin = "DauVaoCuocPhi.txt";
	std::string fout = "KetQua.txt";
	ifstream iStream(fin);
	ofstream oStream(fout);
	
	std::vector<int > costs;
	std::map<int, int> freq;
	
	int cost;
	
	if(iStream.is_open())
	{
		while(!iStream.eof())
		{
			iStream >> cost;
			freq[cost]++;
			costs.push_back(cost);
		}
	}
	else
	{
		cout << "Khong mo duoc file!!!\n";
	}
	
	std::sort(costs.begin(), costs.end());
	double ans = 0;
	int numberPerLine = 0;
	
	for(int i = 0; i < costs.size(); i++)
	{
		oStream << costs[i] << " ";
		numberPerLine++;
		if (numberPerLine % 10 == 0)
		{
			oStream << '\n';
			numberPerLine = 0;
		}
		ans += costs[i];
	}
		
	oStream << "\nTrung binh cuoc phi cua " << costs.size() <<  " sinh vien: " << ans / costs.size() << '\n';
	
	oStream << "-----------TAN SUAT CUA CUOC PHI-----------\n";
	for (std::pair<int, int> it : freq)
	{
		oStream << "Cuoc phi " << it.first << " co tan suat la: " << it.second << '\n';
	}
	
	iStream.close();
	oStream.close();
	return 0;
}
