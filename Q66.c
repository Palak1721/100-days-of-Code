// Q66: Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main() {
    int n, x, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assuming max size 100
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    // find position where x should be inserted
    pos = n; // assume insert at end
    for (i = 0; i < n; i++) {
        if (arr[i] > x) {
            pos = i;
            break;
        }
    }

    // shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x; // insert element
    n++;          // increase array size

    // print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}