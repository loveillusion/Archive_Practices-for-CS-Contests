/* C++ implementation of QuickSort(GeekforGeeks) */
#include <bits/stdc++.h> 
using namespace std;

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int cnt = (low - 1); // Index of smaller element
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            cnt++; // increment index of smaller element
            swap(&arr[cnt], &arr[j]);
        }  
    }  
    swap(&arr[cnt + 1], &arr[high]);
    return (cnt + 1);
}  
  
/* The main function that implements QuickSort(GeekforGeeks)
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";  
    cout << endl;  
}

// Driver Code 
int main()  
{  
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}