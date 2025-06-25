#include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        sum+=i;
    }
    printf("Sum of numbers from %d to %d is: %d\n", a, b, sum);
    return 0;
}