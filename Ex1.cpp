#include <iostream>
#include <conio.h>

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
    
    double d = 12.0365;
    double *pd;
    pd = &d;
    
    cout << "adress pd: " << pd << ", value of address pd :" << *pd << endl;
    //-------------------------------
    // size of pointer
    cout << "size of all pointers in order:" << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(pf) << endl;
    cout << sizeof(pc) << endl;
    cout << sizeof(pd) << endl;
    
    cout << "all pointer have 8 byte size";
    
    // all pointer have 8 byte size
    cout << "new example" << endl;
    int n = 3;
    int *pn;
    
    pn = &n;
    
    cout << n << endl;
    cout << *pn << endl;
    cout << *&n << endl;
    cout << pn << endl;
    cout << &n;
    return 0;
}