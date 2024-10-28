#include<iostream>
#include<stdlib.h>
using namespace std;
//Generate random number between 0 to 100
int main()
{   
    int i;
    int number;
    
    cout<<"Generating random numbers below : : \n\n";
    for(i=0; i<=100; i++){
    	number=rand()%100;
    	cout<<" "<<number<<" ";
    	}
    	
    	cout<<"\n";
    	
	
	
	return 0;
}

