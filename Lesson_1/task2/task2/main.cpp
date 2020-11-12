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
  if (c == 1) {
    d = a + b;
    cout << " Result: " << d;
  }
  if ( c == 2 ) {
    d = a - b;
    cout << " Result: " << d;
  }
  if ( c == 3 ) {
    d = a * b;
    cout << " Result: " << d;
  }
  if (c == 4) {
    d = a / b;
    cout << " Result: " << d;
  }
}


