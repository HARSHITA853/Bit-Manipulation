#include <stdio.h>
void PowerSet(int arr[], int n) {
    int subsets = 1 << n; 

    printf("Power Set:\n");
    for (int i = 0; i < subsets; i++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) { 
                printf("%d ", arr[j]);
            }
        }
        printf("}\n");
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]); 
    PowerSet(arr, n);
    return 0;
}
