#include <iostream>
using namespace std;

int main()
{
    // Implicit Type conversion
    int value = 122;
    double d= value;
    cout <<d <<endl;
    // Explicit type conversion
    char c=(char)value;
    cout<<c;
    return 0;
}