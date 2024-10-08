#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int is_prime(int number);
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    
    if (is_prime(number)){
        printf("%d is prime number.",number);
    }
    else{
        printf("%d is not a prime number.",number);
    }
    return 0;
}

int is_prime(int number){
    if (number<=1){
        return 0;
    }
    if (number==2){
        return 1;
    }
    if(number%2==0){
        return 0;
    }
    for(int i = 3; i<=sqrt(number); i += 2){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}