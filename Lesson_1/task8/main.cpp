#include <iostream>

using namespace std;

int main()
{
 int a, b, c;
 cout << "Enter size of the Christmas tree:";
 cin >> a;
 for (b = 0; b < a; b++) {
     while ( c > b ) {
           c = a;
           cout << " ";
           c--;
     }
     while ( c < a ) {
           c = 0;
           cout << "*";
           c++;
     }
     cout << endl;
 }
}
