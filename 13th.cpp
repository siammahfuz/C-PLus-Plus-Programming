#include<iostream>
using namespace std;
//
int main(){
char oper;
float num1, num2;
cout<<"Enter an Operator (+, -, *, /): ";
cin>>oper;
cout<<"Enter Two Numbers: "<<endl;
cin>>num1>>num2;

switch(oper){
    case '+':
    cout<<num1<<"+"<<num2<<"="<<num1 + num2;
    break;
    case '-':
    cout<<num1<<"-"<<num2<<"="<<num1 - num2;
    break;
    case '*':
    cout<<num1<<"*"<<num2<<"="<<num1 * num2;
    break;
    case '/':
    cout<<num1<<"/"<<num2<<"="<<num1 / num2;
    break;
    default:
    cout<<"Error! The Operator is not correct";
    break;
}
return 0;
}
