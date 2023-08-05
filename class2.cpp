#include <iostream>
using namespace std;
int main()
{
    // int a, b, g;
    // cin>>n;
    // cout<<"value of n is "<<n<<endl;
    // if(a>0){
    //     cout<<"a is positive"<<endl;

    // }
    // else{
    //     cout<<"a is negative"<<endl;
    // }

    // cin>>a>>b;
    // cout<<"value of a and b is :- "<<a<<b<<endl;
    // cout << "Enter value of g is :-";
    // g = cin.get();
    // cout << "value of g is :-" << g << endl;

    // **** Important **** //

    // cin.get() is used to take input like space,enter
    // it give ASCC value of that

    // **** Important **** //

    // cout << "Enter value of a is :- " << endl;
    // cin >> a;
    // cout << "Enter value of b is :- " << endl;
    // cin >> b;
    // if (a > b)
    // {
    //     cout << "a is greater" << endl;
    // }
    // if (b > a)
    // {
    //     cout << "b is greater" << endl;
    // }

    // int x, y;
    // cout << "Enter value of x  :--" << endl;
    // cin >> x;
    // if (x > 0)
    // {
    //     cout << "x is positive";
    // }
    // else if (x < 0)
    // {
    //     cout << "x is negative";
    // }
    // else
    // {
    //     cout << "x is zeroe" << endl;
    // }

    // char ch;
    // cout<<"Enter a character :-- "<<endl;
    // cin>>ch;
    // if(ch>96 && ch<123){
    //     cout<<"ch is in lower case"<<endl;

    // }
    // else if (ch>64 && ch<91){
    //     cout<<"ch in uppercase"<<endl;
    // }
    // else if (ch>47 && ch<58){
    //     cout<<"ch is numeric"<<endl;
    // }
    // else{
    //     cout<<"invalid output"<<endl;
    // }

    // cout<<"Enter a number :-"<<endl;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<" " <<endl;
    //     i=i+1;
    // }
    
//  int n;
//  cout<<"Enter a number :--";
//  cin>>n;
//  int i=1;
//  int sum=0;
//  while(i<=n){
//     sum=sum+i;
//     i=i+1;
//  }
//  cout<<"value of sum :-" <<sum;

//    int n;
//    cout<<"Enter a number :-"<<endl;
//    cin>>n;
//    int i =1;
//    int sum =0;
//    while(i<=n){
//     if(i%2==0){sum=sum+i;}
//     sum=sum+i;
//     i=i+1;
//    }
//    cout<<"value of  even sum :-" <<sum;
 


    int n;
    cout<<"Enter a number :-"<<endl;   
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
    }


}
