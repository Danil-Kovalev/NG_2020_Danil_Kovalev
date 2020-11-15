#include <iostream>

using namespace std;

int main()
{
 int a, b, c;
 cout << "Enter size of the Christmas tree:";
 cin >> a;
 for (b = 0; b < a; b++) {
     for (c = a - 1; c > b; c--) {
         cout << " ";
     }
     for (c = 0; c <= b * 2; c++) {
         cout << "*";
     }
     cout << endl;
 }
 for (c = 1; c == 1; c++) {
     for (b = a; b > c; b--) {
         cout << " ";
     }
     cout << "*";
 }
}
