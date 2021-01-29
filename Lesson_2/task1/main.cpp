#include <iostream>

using namespace std;

int main()
{
 int i = 0;
 int mySchool = 0;
 int arr [10];
 for (i = 0; i < 10; i++) {
     cout << "Enter number school:";
     cin >> arr [i];
 }
 cout << "Enter your school, please:";
 cin >> mySchool;
 bool boolean;
 for (i = 0; i < 10; i++) {
     if (mySchool == arr [i]) {
        boolean = true;
     }
 }
 if (boolean == true) {
    cout << "I know your school!";
 }
 else
    cout << "I don`t know your school(";
}
