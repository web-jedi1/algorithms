#include <stdio.h>
#include <stdbool.h>

//int list[10] = {10,8,7,5,1,2,9,3,4,6}; // medium case
int list[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // worst case , O(n^2)

#define size_l sizeof(list)/sizeof(list[0])
void printList(int *list, int size);
void bubbleSort (int *list, int size);

int main (void) {
    printList(list, size_l);
    bubbleSort(list, size_l);
    //printList(list, size_l);
    return 0;
}

void bubbleSort (int *list, int size) {
    int temp;
    for (int j = 0; j < size; j++) {
        bool swapMade = false;
        printList(list, size);
        for (int i = 0; i < size - 1; i++) {
            if (list[i] > list[i+1]) {
                temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
                swapMade = true;
            }
        }
        if (!swapMade) {break;}
    }
}

void printList(int *list, int size) {
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            printf("[%d,", list[i]);
        } else if (i < size - 1) {
            printf("%d,", list[i]);
        } else {
            printf("%d]\n", list[i]);
        }
    }
}