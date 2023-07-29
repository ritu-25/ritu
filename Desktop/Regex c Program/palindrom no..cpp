// Pallindrom number?
#include <stdio.h>

int main() {
    int n, n1, sum = 0, rem;
    
    printf("Enter any number: ");
    scanf("%d", &n);    
    n1 = n;
    while (n > 0){
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    if (n1 == sum){
        printf("Given number is a palindromic number"); 
    }
    else{
        printf("Given number is not a palindromic number"); 
    }    
    return 0; 
} 
