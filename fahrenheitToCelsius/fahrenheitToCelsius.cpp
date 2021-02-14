#include<iostream>
using namespace std;
int main(){
    float temperature_in_fahrenheit;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>temperature_in_fahrenheit;
    float temperature_in_celsius = (5/9) * (temperature_in_fahrenheit + 32);
    cout<<"The temperature in celsius: "<<temperature_in_celsius<<"C";
    return 0;
}