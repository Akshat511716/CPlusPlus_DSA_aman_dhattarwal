#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number for factorial: ";
    cin>>number;
    unsigned int factorial = 1;
    for(int i = 2; i <= number; i++)
        factorial *= i;
    cout<<"The factorial of "<<number<<" is "<<factorial;
    return 0;
}