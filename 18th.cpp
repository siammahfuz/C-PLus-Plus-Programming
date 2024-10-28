#include<iostream>
using namespace std;
//Find Quotienr
int main(){
    int divisor, dividend,quotient, remainder;

    cout<<"Enter a dividend:: ";
    cin>>dividend;

    cout<<"\nEnter divisor:: ";
    cin>>divisor;

    quotient = dividend/divisor;
    remainder = dividend%divisor;

    cout<<"\nQuotient ="<<quotient<<endl;
    cout<<"\nRemainder="<<remainder<<endl;

    return 0;

}
