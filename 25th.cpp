#include<iostream>
using namespace std;
//calculate sum and average of three numbers
int main(){
	float a, b, c, sum, avg;
	
	cout<<"Enter 1st number: ";
	cin>>a;
	
	cout<<"Enter 2nd number: ";
	cin>>b;
	
	cout<<"Enter 3rd number: ";
	
	sum = a + b + c;
	avg = sum/3;
	
	cout<<"\nThe SUM of 3 Numbers ["<<a<<" + "<<b<<" + "<<c<<" ] = "<<sum<<"\n";
	cout<<"\nThe Average of 3 Numbers ["<<a<<" , "<<b<<" , "<<c<<" ] = "<<sum<<"\n";
	
	
	return 0;
}
