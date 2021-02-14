#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number for checking prime: ";
    cin>>number;
    for(int i = 2; i < number; i++)
        if(number%i==0){
            cout<<"The given number "<<number<<" is Non-Prime";
            return 0;
        }
    cout<<"The given number "<<number<<" is Prime";
    return 0;
}