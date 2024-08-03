#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int x = 12;
	int y = 10;
	
	int *px;
	int *py;
	
	px = &x;
	py = &y;
	
	
	cout << px << endl;
	cout << py << endl;
	
	py = px;
	
	cout << px << endl;
	cout << py << endl;
	
	cout << *px << endl;
	cout << *py << endl;
	
	
	
	
	return 0;
}