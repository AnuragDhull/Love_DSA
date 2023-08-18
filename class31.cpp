#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /// Binary to Decimal ///

    // right shift  divide 2
    // left shift  multiply 2

    int n;
    cout << "Enter a number :--";
    cin >> n;
    int i = 0, ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;
}