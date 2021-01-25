#include <iostream>


using namespace std;

int main()
{
 char str[500];
 int count = 0;
 int word = 0;
 int i = 0;
 cout << "Enter words: ";
 cin.get(str, 500);
 while (str[i] != '\0') {
       if (str[i] != ' ' && word == 0)
       {
          if (str [i] >= 'a' && str [i] <= 'z') {
             word = 1;
             count++;
          }
       }
       else if (str[i] >= '0' && str[i] <= '9')
               word = 0;
               i++;
 }
 cout << "Number words: " << count;
}
