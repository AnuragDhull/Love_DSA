#include <iostream>
using namespace std;

int main()
{            //// Bit Wise Operator ////
    int a=4;
    int b=6;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a^b)<<endl;

   
            //// Left and right shift ////
   
    cout<<(17>>1)<<endl;  
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;


            //// Post & Pre incre-decrement ////
    
    int i=7;
    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(--i)<<endl;
    cout<<(i--)<<endl;

}