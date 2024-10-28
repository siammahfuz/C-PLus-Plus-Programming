#include<iostream>
using namespace std;
//C++ program to Convert days into Years weeks and days
int main()
{
    int y,d,w;

    cout<<"Enter No. of days:: ";
    cin>>d;

    y = d/365;
    d = d%365;
    w=d/7;
    d=d%7;

    cout<<"|nNo. of Years:: "<<y<<"\nNo. of weeks:: "<<w<<"\nNo. of Days"" "<<d<<"\n";



    return 0;
}
