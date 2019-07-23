//Wossen k Hailemariam
//w.hailemariam@jacobs-university.de
//programming in c++ II
//CH08-320143
//a1 p1.cpp

#include "Complex.h"
#include <fstream>

int main()
{

	//checking if open
	ifstream file1("in1.txt");
	if(!file1.is_open())
	{
		cerr << "Error opening file 1\n";
		return 1;
	}

	ifstream file2("in2.txt");
	if(!file2.is_open())
	{
		cerr << "Error opening file 2\n";
		return 1;
	}

	ofstream file_out("output.txt");

	Complex a, b;	
	while(file1 >> a && file2 >> b)
	{
		cout << a+b;
	    file_out << a+b;
		cout << a-b;
		file_out << a-b;
		cout << a*b<<endl;
		file_out << a*b<<endl;
	}
	//closing files
	file1.close();
	file2.close();
	file_out.close();
	return 0;
}
//perfect done##