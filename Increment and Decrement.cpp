//progtam for example of increment and decrement operator
#include<iostream>
using namespace std;    
int main()
{
    int a = 10, b = 15;
//increament Operator

    cout << "a++ is"
         << " " << a++ << endl; // postfix
    cout << "++a is"
         << " " << ++a << endl; // prefix

    // decrement Operator


    cout << "b--is"
         << " " << b-- << endl; // Postfix
    cout << "--b is"
         << " " << --b << endl; // Prefix

    return 0;
}
    