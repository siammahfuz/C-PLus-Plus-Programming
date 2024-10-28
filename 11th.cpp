#include<iostream>
using namespace std;
//Break statement
int main()
{
    for(int i=1; i<=500000000; i++){
        if(i==10000){
            break;
        }
        cout <<i<<endl;
    }
    return 0;

}
