#include <iostream>
#include <conio.h>

using namespace std;

//const pointer

int main(){
	
	
	int a = 3;
	const int *pa = &a;
	// *pa = 5;   error
	cout << *pa << endl;
	
	int b = 6;
	const int *pb = &b;
	
	
	pa = &b;
	cout << *pa << endl;
	
	int c = 12;
	int * const pc = &c;
	cout << *pc << endl;
	*pc = 9;
	//pc = &b;   error
	cout << *pc << endl;
	
	int d = 45;
	const int * const pd = &d;
	// *pd = 10; error
	// pd = &c;  error
	
	cout << *pd << endl;
	
	
	return 0;
	
}