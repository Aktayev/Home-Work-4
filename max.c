// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int arr[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int arr[], int n)
{

    int max_n=arr[0];
    for (int i=0; i<n;i++)
    {
        // arr=[1,2,3]
        // max_n=1
        // 1=1 max_n=1
        // 1<2=> max_n=2
        // Max_n=3

        if(max_n <= arr[i])
        {
            max_n=arr[i];
        }
        
    }
    return max_n;
}
