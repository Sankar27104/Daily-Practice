#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("The sum of %d natural numbres are %d",n,sum);
    return 0;
}