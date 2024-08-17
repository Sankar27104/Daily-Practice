#include<stdio.h>
int main(){
    int kms;
    float miles;

    printf("Enter the kilo meters to convert: ");
    scanf("%d",&kms);

    miles=kms*0.6213712;

    printf("%d kms in miles are %.6f",kms,miles);

    return 0;
}