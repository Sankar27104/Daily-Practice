#include<stdio.h>
int main(){
    int a,b,c,num;
    a=0;
    b=1;
    printf("Enter the limit of fibonacci series: ");
    scanf("%d",&num);
    if(num==1){
        printf("%d",a);
    }
    else{
        printf("%d\n",a);
        for(int i=1;i<=num+1;i++){
            printf("%d\n",b);
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}