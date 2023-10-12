// Laba_04_1.cpp 

// ??? ????? 

// ??????????? ?????? ? 4.1 

// ????? 

// ??????? 24 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	i = 1;
	while (i <= N)
	{
		S += (sqrt(1.0 + std::pow(std::cos(std::sin(i)), 2))) / (1.0 + std::pow(std::sin(std::cos(i)), 2));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = 1;
	do {
		S += (sqrt(1.0 + std::pow(std::cos(std::sin(i)), 2))) / (1.0 + std::pow(std::sin(std::cos(i)), 2));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += (sqrt(1.0 + std::pow(std::cos(std::sin(i)), 2))) / (1.0 + std::pow(std::sin(std::cos(i)), 2));
	}
	cout << S << endl;
	S = 0;
	for (i = 1; i >= 1; i--)
	{
		S += (sqrt(1.0 + std::pow(std::cos(std::sin(i)), 2))) / (1.0 + std::pow(std::sin(std::cos(i)), 2));
	}
	cout << S << endl;
	return 0;
}