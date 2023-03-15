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
    int max = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The maximum number is: %d", max);
    return 0;
}
