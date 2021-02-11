#include<iostream>
using namespace std;
int main(){
    float principal, rate, time;
    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"Enter the time: ";
    cin>>time;
    float interest = (principal*rate*time)/100;
    float total_amount = principal + (principal*rate*time)/100;
    cout<<"The interest obtained: "<<interest<<endl;
    cout<<"The total amount obtained: "<<total_amount<<endl;
    return 0;
}