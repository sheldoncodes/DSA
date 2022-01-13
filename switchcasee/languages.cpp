#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    switch (c)
    {
    case 'a':
        cout << "namadina";
        break;
    case 'b':
        cout << "portijano";
        break;
    case 'c':
        cout << "cia";
        break;
    case 'd':
        cout << "bella";
        break;
    case 'e':
        cout << "namaste";
        break;
    default:
        cout << "ciaobella";
        break;
    }
}