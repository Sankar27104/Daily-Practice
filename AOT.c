#include<stdio.h>
int main(){
    int height;
    int base;
    float area;
    
    printf("Enter the height of the triangle: ");
    scanf("%d",&height);
    
    printf("Enter the base of the traingle: ");
    scanf("%d",&base);
    
    area = 0.5 * base * height;
    printf("Area of the triangle is %.2f",area);
    
    return 0;
}