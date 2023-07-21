//1. Given an array, find an element before which all elements are smaller than it, and after which all are greater than it. Return the index of the element if there is such an element, otherwise, return -1.
//Examples:
//Input: arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};
//Output: 4
//Explanation: All elements on left of arr[4] are smaller than it
//and all elements on right are greater.
//Input: arr[] = {5, 1, 4, 4};
//Output: -1
//Explanation : No such index exits.
#include <stdio.h>

int main() {
    // Declare an array of integers
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};

    // Compute the length of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize the maximum element to the left and minimum element to the right
    int max_left = arr[0];
    int min_right = arr[n-1];

    // Find the element that satisfies the condition
    int i;
    for (i = 1; i < n-1; i++)
        {
        if (arr[i] > max_left)
        {
            max_left = arr[i];
        }
        if (arr[n-i-1] < min_right)
        {
            min_right = arr[n-i-1];
        }
        if (max_left == min_right && arr[i] == max_left)
        {
            printf("The index of the element is %d\n", i);
            return 0;
        }
    }

    // No such element found
    printf("No such element found\n");
    return 0;
}
