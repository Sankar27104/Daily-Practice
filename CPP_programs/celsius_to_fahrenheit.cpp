#include<iostream>
using namespace std;
int main(){
    float celsius,fahrenheit;
    cout<<"Enter the celcius to conver: ";
    cin>>celsius;
    fahrenheit=(celsius*(1.8))+32;
    cout<<fahrenheit<<" is the coverted value of "<<celsius<<" celsius"<<endl;
    return 0;
}