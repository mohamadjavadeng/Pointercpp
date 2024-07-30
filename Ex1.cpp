#include <iostream>

using namespace std;

int main(){
    cout << "Welcome";
    int a = 10;
    int b = 12;
    
    int *p;
//    int z;
//    z = *p; wrong
    p = &a;
    cout << "this is a in address p" << endl;
    cout << "adress p: " << p << ", value of address p :" << *p << endl;
//    *p = z;
    p = &b;
    cout << "this is b in address p" << endl;
    cout << "adress p: " << p << ", value of address p :" << *p << endl;
    
    //------------------------------------------
    // type of pointer
    
    float f = 2.6;
    float *pf;
    pf = &f;
    cout << "adress pf: " << pf << ", value of address pf :" << *pf << endl;
    
    char c = 'p';
    char *pc;
    pc = &c;
    cout << "adress pc: " << pc << ", value of address pc :" << *pc << endl;
    return 0;
}