#include <iostream>


using namespace std;

int main(){
	
	float a = 10000.0;
	int i = 0;
	for(i ; i < 10; i++){
		a = a + 0.13 * a;
	}
	
	cout << "your money after 10 years:" << a ;
	return 0;
	
	
}