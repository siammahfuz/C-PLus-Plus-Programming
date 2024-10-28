#include<iostream>
using namespace std;
// multiplication of two numbers
int main(){
    int first, second, product;

    cout<<"Enter 1st number: ";
    cin>>first;

    cout<<"Enter 2nd number: ";
    cin>>second;

    product = first * second;

    cout<<"\nProduct of Two Numbers ["<<first<<" * "<<second<<"] = "<<product<<"\n";

    return 0;
}
