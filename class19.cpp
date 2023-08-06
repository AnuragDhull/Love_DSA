#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char value = 'A' + i - 1;// Set the starting character based on the row number
        while (j <= i)
        {char value = 'A' + i - 1;
            cout << value;
            value = value + 1; // Increment the ASCII value of 'value'
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
