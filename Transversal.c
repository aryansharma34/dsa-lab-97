#include <stdio.h>
#define MAX_SIZE 100

// Function to traverse and print the list
void traverseList(int list[], int size) {
    printf("List elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int main() {
    int list[MAX_SIZE];
    int size = 0;

    // Insert elements into the list
    list[size++] = 3;
    list[size++] = 7;
    list[size++] = 1;
    list[size++] = 9;

    // Traverse and print the list
    traverseList(list, size);

    return 0;
}
