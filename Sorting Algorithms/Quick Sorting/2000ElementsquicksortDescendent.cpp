//This C++ program implementats quick sort 
#include <stdio.h> 
#include <iostream>
#include <stdlib.h>     /* srand, rand functions*/
#include <time.h>       /* time */  
#include <chrono>
//Functions prototypes
void swap(int *xp, int *yp); 
void quickSort(int arr[], int low, int high);
int partition (int arr[], int low, int high);
void printArray(int arr[], int size);

using namespace std;
using namespace std::chrono; 

// Main program to test sorting functions 
int main() 
{ 
	int arr[2000]; 
	/* initialize random seed: */
  	srand (time(NULL));
  	int n = sizeof(arr)/sizeof(arr[0]); 
	/* generate random number between 1 and 200 and assign that value to array at position i */
	for(int i=0;i<2000;i++)
		arr[i]=rand() % 200 + 1;
   printf("2000 elements have been generated and inserted into array\nSorting the array...\n");
    //starts counting execution time
	auto start = high_resolution_clock::now();
    quickSort(arr,0, n-1);
    //stop counting execution time
    auto stop = high_resolution_clock::now();
	//calculates execution time 
    auto duration = duration_cast<microseconds>(stop - start);
   cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;  
    return 0; 
} 

//This function will swap items accoring to sorting algotirm
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
/* This function takes last element as pivot, places  the pivot element at its correct position in sorted 
   array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];// set pivot value as higer array element 
    int i = (low - 1);  // Index of smaller element 
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is greater than or equal to pivot 
        if (arr[j] >= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); //Call to swap function
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); //return index at right position of pivot in the array
} 
  
//The main function that implements QuickSort arr[] --> Array to be sorted, low  --> Starting index, high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        //pi is partitioning index, arr[p] is now at right place
        int pi = partition(arr, low, high); 
        // Separately sort elements before partition and after partition 
        quickSort(arr, low, pi - 1); //recursive call to this function to sort items at lower elements array
        quickSort(arr, pi + 1, high); //recursive call to this function to sort items at higer elements array
    } 
} 
  
/* Function to print an array content */
void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        cout<<arr[i]<<endl;
} 
  
