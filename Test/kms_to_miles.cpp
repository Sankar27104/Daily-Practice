#include<iostream>
using namespace std;
int main(){
    int kms;
    float miles;
    
    cout<<"Enter the kilometers to convert: ";
    cin>>kms;
    
    miles = kms*0.6213712;
    
    cout<<kms<<" kms in miles are " <<miles << " miles";
    
    return 0;
}