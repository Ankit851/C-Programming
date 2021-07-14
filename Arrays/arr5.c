#include<stdio.h>
int main()
{
    int a[20];
    int m,loc;
    printf("Enter size ");
    scanf("%d",&m);
    printf("Enter %d elements ",m);
    for(int i = 0 ; i < m ; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[10];
    int n;
    printf("Enter size ");
    scanf("%d", &n);
    printf("Enter %d elements ",n);
    for(int j = 0 ; j < n; j++ )
    {
        scanf("%d", &b[j]);
    }
    printf("Enter the location ");
    scanf("%d",&loc);
    // Shifting of array elements of a array by  n locations
    for(int k = m - 1 ; k >= loc ; k--)
    {     // here we are assigning
          a[k+n] = a[k]  ;
    }
    // Inserting elements of second array into first array
    for(int x = 0 ; x < n ; x++ )
    {     // here we are assigning
          a[x + loc] = b[x] ;
    }
    // Updated array is
    printf("The Updated array is \n");
    for(int z = 0 ; z < m+n ; z++)
    {
        printf("%d\t",a[z]);
    }

    
}