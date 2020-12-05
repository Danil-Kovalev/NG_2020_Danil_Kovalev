#include <iostream>

using namespace std;

int main()
{
 int arr[20];
    int str = 0, max = 0;
    for(int i = 0; i < 20; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];
        str++;
        if(arr[i] == 0) {
            break;
        }
    }
    for (int i = 0; i < str; i++)
    {
        for (int q = 0; q < max - (arr[i] + q); q++)
        {
            cout << " ";
        }
        for (int q = 0; q != arr[i]; q++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
