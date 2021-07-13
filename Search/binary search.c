#include<stdio.h>

int binarySearch(int arr[] , int size , int element)
{
    int low , mid , high;
    low = 0;
    high = size  - 1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low = mid +1;
        }
        else
        {
            high = mid -1;
        }
    }

    return -1;
}

int main()
{
    int n;
    printf(" Enter the number to search \n ->");
    scanf("%d",n);
    int arr[]= {12,13,15,16,18,19,21,67,69,72,76,79,80,81,85,90,92,93,94,99,100};
    int size = sizeof(arr)/sizeof(int);
    int element = n;
    int searchIndex = binarySearch(arr, size , element);
    printf("the Index of your result is %d", searchIndex);
    return 0;
}
