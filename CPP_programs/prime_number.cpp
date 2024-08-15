#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n);
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if (is_prime(n)){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}
bool is_prime(int n){
    if (n<=1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    for (int i=3; i<=sqrt(n);i+=2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}