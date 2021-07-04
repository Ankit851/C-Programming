#include<stdio.h>
int main()
{   int large;
    int arr[5] = {20,10,40,50,30};
    // Consider first element of array to be largest
    large = arr[0];
    // Starting the loop
    for(int i = 1 ; i < 5 ; i++)
    {
        // Comparing the largest element with remaining index elements
       //  If the largest element assumed is smaller than the index element
       //  The index element will replace the value of largest element considered
       //  With the index element which is greater and will update the large Variable
       if(large < arr[i])
       {
           large = arr[i];
       }

    }
    
    printf("The largest element in the array is %d",large);     

}
