#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must contain at least two elements.\n";
        return -1;
    }

    int first = INT_MIN, second = INT_MIN;

    // First pass: Find the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > first)
            first = arr[i];
    }

    // Second pass: Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > second && arr[i] < first)
            second = arr[i];
    }

    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1)
        cout << "The second largest element is: " << secondLargest << endl;
    else
        cout << "No second largest element found.\n";

    return 0;
}
