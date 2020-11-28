#include <iostream>

using namespace std;

int main()
{
 int i = 0;
 int sch = 0;
 int arr [10];
 for (i = 0; i < 10; i++) {
     cout << "Enter number school:";
     cin >> arr [i];
 }
 cout << "Enter your school, please:";
 cin >> sch;
 for (i = 0; i < 10; i++) {
     if (sch == arr [i]) {
        cout << "I know it`s school";
        return 0;
     }
 }
 cout << "I don`t know your school";
}
