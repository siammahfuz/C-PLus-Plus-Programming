#include<iostream>
using namespace std;
//swap two numbers without using third variable;
int main()
{
    int a, b;

    cout<<"Enter 1st number: : ";
    cin>>a;
    cout<<"\nEnter 2nd number: : ";
    cin>>b;

    cout<<"\nBefore swaping, Numbers are : : "<<endl;
    cout<<"\n\ta = "<<a<<", b = " <<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"\nAfter swapping, Numbers are : : "<<endl;
    cout<<"\n\ta = "<<a<<", b = "<<b<<endl;

    return 0;
}
