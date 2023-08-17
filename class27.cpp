#include<iostream>
using namespace std;
int main()
{
      /// Fibo Nacci Series ///
    

    int n,i;
    int a=0;
    int b=1;
    cout<<"enter a number :--";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int nextNumber=a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
        
    }

    
}