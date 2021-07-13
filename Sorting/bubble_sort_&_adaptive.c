#include<stdio.h>

// function to display the value of array
void printArray(int* a, int n)
{
    printf("sorted array :-\n");
    for(int i=0; i<n; i++)
    {

        printf("%d,",a[i]);
    }
    printf("\n");
}

// function to sort the array
void bubbleSort(int *a, int n)
{
    int temp;
    int isSorted = 0;
    for(int i=0; i<n-1; i++)
    {
        printf("Working on pass number %d\n", i+1);
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        }
    }
}


// function to sort adaptive the array
void bubbleSortAddaptive(int *a, int n)
{
    int temp;
    int isSorted = 0;
    for(int i=0; i<n-1; i++)
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
        {
            return;
        }
    }
}

// main function
int main()
{
    // taking size of array
    int i=0;    // int to exicute while loop
    int n;
    printf("Enter the size of array :-");
    scanf("%d", &n);
    // declaring array
    int a[n];
    // taking value of array using loop
    while(i<n)
    {
        printf("enter the %d element of array :- ",i+1);
        scanf("%d",&a[i]);
        i++;
    }


  //  printArray(a,n);  // Printing the array before sorting
  //  bubbleSortAddaptive(a,n);  // function to sort the array
    bubbleSort(a,n);    // Normal sorting or array
    printArray(a,n);  // Printing the array before sorting

    return 0;
}
