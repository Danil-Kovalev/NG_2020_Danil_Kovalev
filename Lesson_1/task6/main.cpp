#include <iostream>

using namespace std;

int main()
{
 int a, b ,c;
 cout << " Enter size: ";
 cin >> a;
 for ( b = 0; b <= a - 1; b++ ) {
   for ( c = 0; c <= a - 2; c++)  {
       cout << "*";
   }
     cout << "*" << endl;
   }
 cout << endl;
 for ( b = 0; b <= a - ( a - 1 ); b++) {
     cout << "*" << endl;
     for ( b = 0; b <= a - ( a - 2 ); b++) {
         cout << "*";
     }
 }
}
