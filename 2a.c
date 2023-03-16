#include<stdio.h>

int main(){
    int num,d1,d2,d3,d4,d5,sum;
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    d5= num % 10;
    d4= (num/10) % 10;
    d3= (num/100) % 10;
    d2= (num/1000) % 10;
    d1= num/10000;
    sum= d5+ d4+ d3+ d2+ d1;
    printf("Sum of all digits= %d\n", sum);
    return 0;
}