#include<iostream>
using namespace std;
//
int main(){
	int y, f, i;
	cout<<"Enter inches to convert::";
	cin>>i;
	
	y=i/432;
	i=i%32;
	f=i/12;
	i=i%12;
	
	cout<<"\nAfter Conversionn from inches to feet, yards and inches:: \n";
	cout<<"\nYards= "<<y<<"\n\nfeet = "<<f<<"\n\nInches:: \n";
	
	return 0;
}
