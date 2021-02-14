#include<iostream>
using namespace std;
int main(){
    int number;
    long sum = 0;
    cout<<"Enter the Nth Natural number: ";
    cin>>number;
    for(int i = 1; i <= number; i++)
        sum += i;
    cout<<"The sum of "<<number<<" Natural number is "<<sum;
}