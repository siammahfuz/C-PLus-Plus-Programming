#include<iostream>
using namespace std;
//goto in c++
int main(){
    float num, average, sum =0.0;
    int i, n;

    cout<<"Maximum number of inputs: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"Enter n"<<i<<"; ";
        cin>>num;

        if(num<0.0){
            goto jump;
            }
        sum =+ num;
    }
    jump:
        average = sum/(i-1);
        cout<<"\nAverage = "<<average;
        return 0;

}
