#include<iostream>
using namespace std;
int main(){
    float number1, number2, number3;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    cout<<"Enter the third number: ";
    cin>>number3;
    if(number1 > number2){
        if(number1 > number3)
            cout<<"The greatest number of All is "<<number1;
        else
            cout<<"The greatest number of All is "<<number3;
    }
    else{
        if(number2 > number3)
            cout<<"The greatest number of All is "<<number2;
        else   
            cout<<"The greatest number of All is "<<number3;
    }
    return 0;
}