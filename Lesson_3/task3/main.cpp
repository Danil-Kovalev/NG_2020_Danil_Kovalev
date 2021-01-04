#include <iostream>


using namespace std;

int main()
{
    char string[500];
    int i = 0;
    cout << "Enter string: ";
    cin.get (string, 500);
    cout << "Your string: ";
    for (i = 0; i < string[i]; i++) {
        cout << (char)toupper(string[i]);
    }
}
