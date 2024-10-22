// Traversal operation
// # include<stdio.h>
// int main(){
//     int array[10] = {35, 35, 42, 10, 14, 19, 27, 44, 26}
//     len = sizeof(array)/sizeof(int)
//     for(int i=0; i<len; i++){
//         printf("%d\n", array[i])
//     }
//     return 0;
// }





// Insertion operation
#include <stdio.h>

int main() {
    int arr[20] = {18, 30, 15, 70, 12};  // Initial array with 5 elements
    int i, x, pos, n = 5;  // i is a loop variable, x is the element to be inserted, pos is the position, n is the current size of the array

    // Display the array elements before insertion
    printf("Array elements before insertion\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    x = 50;  // Element to be inserted
    pos = 4;  // Position at which the element will be inserted
    n++;  // Increment the size of the array

    // Shift elements to the right to make space for the new element
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];

    // Insert the new element at the specified position
    arr[pos - 1] = x;

    // Display the array elements after insertion
    printf("Array elements after insertion\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
        return 0;
}






//  Deletion operation
#include <stdio.h>

int main() {
    int arr[] = {18, 30, 15, 70, 12};  // Initial array with 5 elements
    int k = 30, n = 5;  // k is the element to be deleted, n is the current size of the array
    int i, j;

    // Display the array elements before deletion
    printf("Given array elements are:\n");

    for (i = 0; i < n; i++) {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }

    // Search for the element to be deleted
    for (i = 0; i < n; i++) {
        if (arr[i] == k) {
            // Element found, shift elements to the left to overwrite the element
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;  // Decrease the size of the array
            break;  // Exit the loop once the element is deleted
        }
    }

    printf("\nElements of array after deletion:\n");

    for (i = 0; i < n; i++) {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }

    return 0;
}






// Search operation
#include <stdio.h>

void main() {
    int arr[5] = {18, 30, 15, 70, 12};  // Initial array with 5 elements
    int item = 70, i, j = 0;  // item is the element to be searched, j is a loop variable

   // Display the array elements before searching
    printf("Given array elements are:\n");

    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }

    printf("\nElement to be searched = %d", item);

   // Search for the element in the array
    while (j < 5) {
        if (arr[j] == item) {
            break;  // Exit the loop if the element is found
        }

        j = j + 1;  // Move to the next position
    }

   // Print the result
    printf("\nElement %d is found at %d position", item, j + 1);
}





// Update operation
#include <stdio.h>

void main() {
    int arr[5] = {18, 30, 15, 70, 12};  // Initial array with 5 elements
    int item = 50, i, pos = 3;  // item is the new element to be inserted, pos is the position to be updated

    // Display the array elements before updating
    printf("Given array elements are:\n");

    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }

    // Update the element at the specified position
    arr[pos - 1] = item;

    printf("\nArray elements after updation:\n");

    // Display the array elements after updating
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }
}





