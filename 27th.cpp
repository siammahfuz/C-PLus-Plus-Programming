#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//c++ program to raise any number X to power N
int main()
{
int x, n, result;

cout<<"Enter value of X:: ";
cin>>x;

cout<<"Enter value of N:: ";
cin>>n;

result=pow(x,n);

cout<<"\nThe Power of number [""<<<x<< ^ "<<n<<" ] = "<<result<<"\n";



return 0;
}
