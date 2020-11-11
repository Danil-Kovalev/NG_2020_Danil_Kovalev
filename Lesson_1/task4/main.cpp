#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << " Skolko ti zarabativaesh: ";
    cin >> a;
    if (a < 1000)
    {
    cout << " Rabotai bolshe ";
    }
    if ( 1000 < a < 999999)
    {
    cout << " Tak derzhat! ";
    }
    if (a > 1000000)
    {
    cout << " Ti millioner! ";
    }
}
