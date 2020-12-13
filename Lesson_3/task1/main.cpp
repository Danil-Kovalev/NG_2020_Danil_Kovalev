#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str [20];
    cout << "Enter string: ";
    cin >> str;
    while (str != '\0') {
          str++;
    }

    cout << str;
}
