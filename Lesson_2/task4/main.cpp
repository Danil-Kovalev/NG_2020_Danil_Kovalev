#include <iostream>

using namespace std;

int main()
{
    int columns[5], maximum = 0, myData[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the amount of stars in the " << i+1 << " column: ";
        cin >> columns[i];
        if (maximum < columns[i])
            maximum = columns[i];
    }
    for (int i = 0; i < 5; i++)
    {
        myData[i] = columns[i];
    }
    for (int j = 0; j < maximum; j++)
    {
        for(int i = 0; i < 5; i++)
        {
            if (myData[i] > 0)
            {
                cout << '*';
            }
            if (myData[i] <= 0)
                cout <<  ' ';
            myData[i]--;
        }

        cout << endl;
    }
}
