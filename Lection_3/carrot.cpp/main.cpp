#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
   char text [100];
   int shift,encrypt;
   cout << "Enter text: ";
   cin >> text;
   cout << "Enter shift: ";
   cin >> shift;
   for (int i = 0; i < strlen(text); i++) {
       text[i] = tolower (text[i]);
       encrypt = ((text[i] + shift)) % 26;
       cout << encrypt;
   }
}
