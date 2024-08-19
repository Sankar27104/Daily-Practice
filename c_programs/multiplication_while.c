#include<stdio.h>
int main(){
    int n,result;
    int i=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(i<=10){
        result=n*i;
        printf("%d * %d = %d\n",n,i,result);
        i++;
    }
    return 0;
}