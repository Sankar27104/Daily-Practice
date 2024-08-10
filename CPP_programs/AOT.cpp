#include<iostream>
using namespace std;
int main(){
    int height;
    int base;
    int area;

    cout<<'Enter the height of the traingle: ';
    cin>>height;

    cout<<"Enter the base of the triangle: ";
    cin>>base;

    area = 0.5 * height * base;

    cout<<"Area of the triangle is "<<area<<endl;
}