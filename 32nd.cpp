#include<iostream>
using namespace std;
//C++ Program to Check whether a year is Leap year or not
int main(){

    int year;

    cout<<"Enter any Year:: ";
    cin>>year;

    if(year%100==0){
        if(year%400==0){
            cout<<"\nThe entered Year ["<<year<<"] is a Leap year.\n";

        }
    }
    else
    {
        if(year%4==0){
            cout<<"\nThe Entered year ["<<year<<"] is a Leap year.\n";

        }
        else
        {
            cout<<"\nThe Entered year ["<<year<<"] is not a Leap year.\n";
        }
    }


    return 0;
}
