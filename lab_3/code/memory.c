#include "stdio.h"
#include "stdlib.h"
#include "../headers/print.h"


int _allocate_memory(int **array, int capacity) {
    *array = realloc(*array, capacity * sizeof(int));
    return 0;
}

int delete_array(int *array) {
    free(array);
    return 0;
}

int allocate_memory(int **array, int size, int *capacity) {
    printf("Введите требуемый размер массива:\n");
    scanf("%d", capacity);
    _allocate_memory(array, *capacity);
    print_data(*capacity, size);
    return 0;
}