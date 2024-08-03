#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int x = 5;
	int y = 3;
	
	int *px = &x;
	int *py = &y;
	cout << px << endl;
	cout << py << endl;
	cout << *px << endl;
	
	px = px + 1;
	cout << px << endl;
	cout << *px << endl;
	
	px = px - 2;
	cout << px << endl;
	cout << *px << endl;
	
	//----------------------
	cout << px - py << endl;
	if(px == py){
		cout << "equal";
	}
	else {
		cout << "not equal";
	}
	
	/*
	px + py
	px * py
	px / py
	px % px
	all above are error*/
	px = px + 1;
	cout << endl << px - py << endl;
	if(px == py){
		cout << "equal";
	}
	else {
		cout << "not equal";
	}
	return 0;
	
}