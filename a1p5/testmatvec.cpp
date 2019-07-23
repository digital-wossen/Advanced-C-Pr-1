//Wossen k Hailemariam
//w.hailemariam@jacobs-university.de
//programming in c++ II
//CH08-320143
//a1 p5.cpp
#include "Matrix.h"

using namespace std;

int main()
{
	Matrix matA(1,2);	
	Vector<int> vecA(2);
	
	cin >> matA;
	cin >> vecA;
	cout << (vecA*matA);
	return 0;
}
