#include <iostream>

using namespace std;

int main()
{
 int a, b ,c;
 cout << " Enter size: ";
 cin >> a;
 for ( b = 0; b < a; b++) {   //kvadrat
     for (c = 0; c < a; c++) {
         cout << "*";
     }
     cout << endl;
 }
 cout << endl; //1 treugolnik
 for (b = 0; b < a; b++) {
     for (c = 0; c <= b; c++) {
         cout << "*";
     }
     cout << endl;
 }
 cout << endl; //2 treugolnik
 for (b = 0; b < a; b++) {
     for (c = a - 1; c > b; c--) {
         cout << " ";
     }
     for (c = 0; c <= b; c++) {
         cout << "*";
     }
     cout << endl;
 }
 cout << endl; //3 treugolnik
 for (b = 0; b < a; b++) {
     for (c = a; c > b; c--) {
         cout << "*";
     }
     cout << endl;
 }
 cout << endl; //4 treugolnik
 for (b = 0; b < a; b++) {
     for (c = 0; c <= b; c++) {
         cout << " ";
     }
     for (c = a; c > b; c--) {
         cout << "*";
     }
     cout << endl;
 }
}
