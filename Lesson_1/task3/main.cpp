#include <iostream>

using namespace std;

int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  cout << " Skolko oreshkov nuzhno belochke: ";
 cin >> a;
  cout << " Skolko oreshkov v odnoy shishke: ";
 cin >> b;
  cout << " Skolko shishek bylo sobrano: ";
 cin >> c;
  d = b * c;
   if ( a <= d ) {
     cout << "Yes";
   }
   if ( a > d ) {
     cout << " No. Zhalko belochku( ";
   }
}
