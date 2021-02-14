#include<iostream>
using namespace std;
int main(){
    float side1, side2, side3;
    cout<<"Enter the length of the side 1: ";
    cin>>side1;
    cout<<"Enter the length of the side 2: ";
    cin>>side2;
    cout<<"Enter the length of the side 3: ";
    cin>>side3;

    if(side1 == side2 && side1 == side3)
        cout<<"The Triangle is an Equilateral Triangle";
    else if(side1 == side2 || side1 == side3 || side2 == side3)
        cout<<"The Triangle is an Isosceles Triangle";
    else   
        cout<<"The Triangle is an Scalene Triangle";
}