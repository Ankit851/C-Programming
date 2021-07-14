#include<stdio.h>
int fib ()
{   int num;
    int a = 0 , b = 1 ;
    printf("Enter the number of terms");
    scanf("%d", &num);
    printf("%d %d ",a,b);
    for(int i = 2 ; i <= num ; i++)
    {
        int m;
        m = a + b ;
        printf("%d\t",m);
        a = b ;
        b = m ;

    }

}
int main()
{ 
   fib();  
}
