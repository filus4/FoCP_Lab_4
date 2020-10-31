#include <iostream>

using namespace std;

int main() {

    int variable = 8;

    int* ptr; // empty ---> null pointer
    // cout << *ptr << endl; -- Don't uncomment, will blow up!

    cout << ptr << endl;

    cout << "Memory address of variable: " << &variable << endl;
    cout << "Memory address of ptr: " << &ptr << endl;

    ptr = &variable;

    cout << *ptr << endl;

    *ptr = 25; // It is the same if we did variable = 25;

    cout << variable << endl;
    
    return 0;
}