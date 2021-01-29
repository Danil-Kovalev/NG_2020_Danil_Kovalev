#include <iostream>

using namespace std;

int main()
{
 int arr[5];
 int max = 0;
 for (int i = 0; i < 5; i++)
 {
     cout << "Enter the number: ";
     cin >> arr[i];
     if (max < arr[i])
        max = arr[i];
 }
 for (int q = 0; q < max; q++)
 {
     for (int i = 0; i < 5; i++) {
     if (arr [i] > q)
     {
         cout << "*";
     }
     else
         cout << " ";
     }
     cout << endl;
 }
}
