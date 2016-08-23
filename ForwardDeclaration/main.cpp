#include "C:\Users\user\Documents\C++\Basic_Concepts\struct.h"
#include <iostream>

using namespace std;

/*struct B;
struct D;*/

void func(B*)
{
	cout << "func(B*)" << endl;
};

void func(D*)
{
	cout << "func(D*)" << endl;
};

void func(void*)
{
	cout << "func(void*)" << endl;
};


void main(void) {
	D* x = new D();
	func(x);

	getchar();
}