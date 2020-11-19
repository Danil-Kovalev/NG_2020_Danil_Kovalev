#include <iostream>

using namespace std;

int main()
{
 int a;
 cout << " Skolko ti zarabativaesh: ";
 cin >> a;
 if ( a < 1000 ) {
     cout << " Rabotai bolshe ";
 }
 if ( a > 999 ) {
    if ( a > 999999 )
       cout << " Ti millioner! ";
   if ( a < 1000000 )
       cout << " Tak derzhat! ";
 }
 cout << " No ti molodec! ";
}
