#include <iostream>

using namespace std;

int main()
{
 int a, b, c, d;
 cout << " Enter number 1: ";
 cin >> a;
 cout << " Enter number 2: ";
 cin >> b;
 cout << " Enter number 1-4: ";
 cin >> c;
  switch ( c ) {
          case 1: a + b;
          case 2: a - b;
          case 3: a * b;
          case 4: a / b;
          default: cout << "Error...";
  }
  cout << " Result: " << d;
}


