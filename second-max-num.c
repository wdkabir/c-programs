#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max1 = arr[0], max2 = arr[0];
    for(i=1; i<n; i++)
    {
        if (arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]> max2 && arr[i] != max1)
        {
            max2=arr[i];
        }
    }
    printf("The second maximum number is : %d",max2);
    return 0;
}
