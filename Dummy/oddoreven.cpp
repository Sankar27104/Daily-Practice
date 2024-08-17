#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    
    if(num%2==0){
        cout<<"the given number "<<num <<" is even";
    }
    else{
        cout<<"The given number "<<num <<" is odd";
    }
    
    return 0;
    
}