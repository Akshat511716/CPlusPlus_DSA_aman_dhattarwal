#include<iostream>
using namespace std;

// Prime number Function

bool isPrime(int n);

int main(){
    int number;
    cout<<"Enter the Nth number upto which Prime numbers are required: ";
    cin>>number;
    for(int i = 2; i <= number; i++)
        if(isPrime(i))
            cout<<i<<" ";
}

bool isPrime(int n){
    for(int i = 2; i < n; i++)
        if(n%i==0)
            return false;

    return true;
    
}