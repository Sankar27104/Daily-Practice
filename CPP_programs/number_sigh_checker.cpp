#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(num>0){
        cout<<"The given number is positive.";
    }
    else if(num<0){
        cout<<"The given number is negative.";
    }
    else{
        cout<<"The given number is zero";
    }
    
    return 0;
}