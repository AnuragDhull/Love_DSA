#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n :--";
    cin >> n;
    int i = 1;
    while (i <= n){
        // for printing space
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }

        // for printing *
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    

    }
}