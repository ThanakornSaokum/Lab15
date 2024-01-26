#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    char b = 'A';
    char c = b;
    int *x = &a;
    char *y = &b;
    int **z = &x;
    
    cout << a << " " << b << " " << c << " " << &x << " " << &y << " " << &z << endl;
    
    cout << &a << " " << &y << " " << &y << " " << &x << " " << &y << " " << &z << endl;
    
     c = 'F';
    cout << a << " " << c << " " << c << " " << &x << " " << &y << " " << &z << endl;
    
     *y = 'W';
    cout << a << " " << *y << " " << *y << " " << &x << " " << &y << " " << &z << endl;
    
     a = 6;
    cout << a << " " << *y << " " << *y << " " << &x << " " << &y << " " << &z << endl;
    
     a = 7;
    cout << a << " " << *y << " " << *y << " " << &x << " " << &y << " " << &z << endl;

    return 0;
}