/// for loop ///


#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number :--";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<i<<endl;
    }


    for(int a=0,b=1;a>=0 && b>=0;a--,b--)
    {
        cout<<" "<<a <<" "<<b <<endl;
    }

    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum +=1;
    }
    cout<<sum;
}
