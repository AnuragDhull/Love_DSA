#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n :--";
    cin>>n;
    int i=1;
    while(i<=n){
        // to print space
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }

        // to print 2nd triangle
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;  
        }

         // to print 3rd triangle
         int start=i-1;
         while(start){
            cout<<start;
            start =start-1;
         }
         cout<<endl;
         i=i+1;
    }
}