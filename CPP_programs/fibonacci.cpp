#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c,num;
    cout<<"Enter the fibonacci range limit: ";
    cin>>num;
    if(num==1){
        cout<<a;
    }
    else{
        cout<<a<<endl;
        for(int i=1;i<num;++i){
            cout<<b<<endl;
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}