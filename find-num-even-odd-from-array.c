#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count the number of even and odd elements in the array
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Number of even elements in the array: %d\n", evenCount);
    printf("Number of odd elements in the array: %d\n", oddCount);

    return 0;
}
