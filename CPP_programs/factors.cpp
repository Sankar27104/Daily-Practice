#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    for(int i=1;i<=num+1;++i){
        if (num%i==0){
            cout<<" "<<i;
        }
    }
    return 0;
}