#include "stdio.h"
#include "../headers/print.h"


int print_array(int *array, int size) {
    printf("Элементы массива:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", *(array + i));
    }

    return 0;
}

int print_data(int capacity, int size) {
    printf("Доступный объем памяти: %d\nРазмер массива: %d\n", capacity, size);
    return 0;
}
