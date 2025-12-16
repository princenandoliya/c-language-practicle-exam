#include <stdio.h>

int main() {
    int array[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    ptr = array;   

    printf("Square of each element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}
