// Header file used for taking Standard input and output
#include<stdio.h>
// Main Code
int main()
{    // Declaring a array
    int arr[10];
    // Variable Declarations
    int n,i,key,loc;
    // Asking for Size of array
    printf("Enter size ");
    scanf("%d", &n);
    // Taking the elements in the array
    printf("Enter %d elements\n",n);
    // This for loop is used for taking the elements in the array
    for(i=0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Now the array is 
    printf("Resultant array is :-\n");
    for(i=0;i<n;i++)
    {   
       printf("%d\t\n",arr[i]);
    }
     // Asking for the Key element to be inserted in the location of the array
    //  Specified by the user
    printf("Enter the key Element to be inserted ");
    scanf("%d",&key);
    // Asking for the location where you want the key Element to be inserted in the array
    printf("Enter the location where you want the element to be inserted ");
    scanf("%d",&loc);
    // Shifting of array element by one location
    for(i=n-1;i>=loc;i--)
    {
        arr[i+1] = arr[i];
       
    }
     // Assigning the Key element to the given location of the array as specified by the user
    // Because now that location of the array is empty as elements are shifted by one location
    // So this line of code will insert the key element in the location specified by the user
     arr[loc] = key ;
   // Printed the Updated Array 
   printf("Updated array is\n");
    for(i = 0 ; i <= n ; i++)
    {
    printf("%d\t",arr[i]);
    }
}