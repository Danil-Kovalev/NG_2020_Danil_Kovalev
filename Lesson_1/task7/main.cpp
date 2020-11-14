#include <iostream>

using namespace std;

int main()
{
 int a = 0;
 int b = 0;
 cout << " Enter number: ";
 cin >> a;
 while ( b < a ) {
       cout << b++ << ",";
 }
 cout << b;
}
