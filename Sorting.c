// Sorting
#include <stdio.h>
#include <stdlib.h>

// Swap Function
void swap (int *a, int *b){
    //printf("\n a = %d , b = %d \n", a, b);
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    //printf("Now a = %d , b = %d. \n", a, b);
}

// Selection Sort
void SelectionSort(int A[], int n){
    int i;
    int j;
    int min;

    for (i = 0; i<n-1; i++){
        min = i; // Lets say A[i] is the min element
        for (j=i+1; j<n; j++){
            if (A[j]< A[min]){
                min = j;
                swap(&A[min], &A[j]);
            }
        }
    }
}

// Insertion Sort
void InsertionSort(int A[], int n){
	int i; // For iterating over the array from 1 to n-1 as 1 element is already sorted.
	int j; // For iterating over the
	int element;

	for(i = 1; i<n; i++){ // Iterating over the Unsorted array from 1 to n-1 ass 1st element is always sorted.
		element = A[i]; // Element of the Unsorted part of the array
		j = i; 				// For iterating over the sorted part of the array from right to left

		while (j>0 && A[j-1] > element ){
			A[j] = A[j-1];
			j = j-1;
		}
		A[j] = element;
	}
}


// Bubble Sort
// ---- Prints the Array ----
void printArray(int A[], int n){
    printf("Size of array = %d \n", n);
    int i;
    printf ("Array = " );
    for (i = 0; i<n; i++ ){
        printf("%d ", A[i]);
    }

}


int main(void){
    int arr[] = {10, 1,2, 3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);

//    int index = BinarySearch(arr, 9, 12);
//    int index = BinarySearch_in_Sorted_Rotated_Array(arr, n);
//    if (index>=0){
//        printf("\nThe index of min element is at %d index and its value is %d", index, arr[index]);
//    }
//    else{
//        printf("\nElement Not Found. \n");
//    }

    //bubbleSort(arr, n);
    //InsertionSort(arr,n);
    SelectionSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);
    return 0;
}
