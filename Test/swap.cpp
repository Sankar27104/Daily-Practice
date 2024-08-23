#include<iostream>
using namespace std;
int main(){
    int x=6;
    int y=8;
    cout<<"Intially the value of x is "<<x<<endl;
    cout<<"Initially the value of y is "<<y<<endl;
    
    int temp=x;
    x=y;
    y=temp;
    cout<<"After swapping the value of x = "<<x<<endl;
    cout<<"After swapping the value of y = "<<y<<endl;
    
    return 0;
}