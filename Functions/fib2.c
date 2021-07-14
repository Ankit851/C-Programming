#include <stdio.h>

void fib(int n)
{   
    static int n1=0, n2=1, n3;
    if ( n > 0) {
        n3 = n1 + n2;
        n1= n2;
        n2 = n3;
        printf(" %d", n3);
        fib(n-1);
    }
}
int main()
{
    int m;
    printf("Enter number of terms: ");
    scanf("%d", &m);
    if ( m > 2){
        printf("Fibonacci series: 0 1");
        fib(m-2);
    } else if (m == 2) {
        printf("Fibonacci series: 0 1");
    } else if (m == 1) {
        printf("Fibonacci series: 0 ");
    } else {
        printf("Enter number of terms greater than 1");
    }
    
}