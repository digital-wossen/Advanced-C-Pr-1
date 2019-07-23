//Wossen k Hailemariam
//w.hailemariam@jacobs-university.de
//programming in c++ II
//CH08-320143
//a1 p4.cpp

#include<iostream>
using namespace std;
 
/*
 * The problem was that A doesn't have an empty constructor.
 */

/*
 * Since we inherited using public virtual we have to call the constructors directly from class D.
 */
class A
{
	private:
  		int x;
	public:
  		A(int i) { x = i; }
  		void print() { cout << x; }
};
 
class B: virtual public A
{
	public:
  		B():A(10) {  }
};
 
class C:  virtual public A 
{
	public:
  		C():A(10) {  }
};
 
class D: public B, public C {
	public:
		D():A(10){};
};
 
//int main()
{
    D d;
    d.print();
    return 0;
	for(size_t i = 0; i < count; i++)
	{
		/* code */
	}
	for(auto&& i : v)
	{
		
	}
	
	
	
}
f