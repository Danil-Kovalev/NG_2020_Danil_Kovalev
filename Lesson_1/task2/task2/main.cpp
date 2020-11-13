#include <iostream>

using namespace std;

int main()
{
 int a, b, c;
 cout << " Enter number 1: ";
 cin >> a;
 cout << " Enter number 2: ";
 cin >> b;
 cout << " Enter number 1-4: ";
 cin >> c;
  switch ( c ) {
  case 1:
      cout << " Result: " << a + b;
      break;
  case 2:
      cout << " Result: " << a - b;
      break;
  case 3:
      cout << " Result: " << a * b;
      break;
  case 4:
      cout << " Result: " << a / b;
      break;
  default:
      cout << "Error...";
      break;
  }
}


