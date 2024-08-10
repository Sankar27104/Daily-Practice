#include<stdio.h>
int main(){
    int x;
    int y;
    int temp;
    x=5;
    printf("Initially x=%d\n",x);
    y=6;
    printf("Initially y=%d\n",y);
    temp=x;
    x=y;
    y=temp;
    printf("After swapping value of x=%d\n",x);
    printf("After swapping value of y=%d\n",y);

    return 0;
}