#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    if(num<0){
        printf("Number is negative");
    }
    else if(num>0){
        printf("Number is positive");
    }
    else{
        printf("Number is zero");
    }
    
    return 0;
}