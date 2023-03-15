#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The minimum number is: %d", min);
    return 0;
}

