#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter the celsuis degrees to convert: ");
    scanf("%f",&celsius);
    fahrenheit=(celsius*(1.8))+32;
    printf("%.2f is the converted fahrenheit degrees.",fahrenheit);
    return 0;
}