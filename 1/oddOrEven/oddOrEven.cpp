#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number to check Odd or Even: ";
    cin>>number;
    if(number%2==0)
        cout<<"The given number is Even";
    else    
        cout<<"The given number is Odd";
}