#include "stdio.h"
#include "stdlib.h"
#include "../headers/print.h"
#include "../headers/elements.h"


int _check_num(int num) {
    int prev = num % 10;
    num /= 10;
    int cur = num % 10;
    num /= 10;
    int delta = cur - prev;

    while (num) {
        if (num % 10 - cur == delta) {
            cur = num % 10;
            num /= 10;
        } else return 0;
    }
    return 1;
}


int _handle_data(int *array, int *size, int **new_array, int *new_size) {
    *new_array = realloc(*new_array, *size * sizeof(int));
    int j = 0;
    for (int i = 0; i < *size; ++i) {
        if (_check_num(*(array + i))) {
            *(*new_array + j) = *(array + i);
            delete_elem(array, size, i);
            i -= 1;
            j += 1;
        }
    }
    if (j !=0) {
        *new_array = realloc(*new_array, j * sizeof(int));
    }
    *new_size = j;
    return 0;
}

int handle_data(int *array, int *size, int **new_array, int *new_size) {
    _handle_data(array, size, new_array, new_size);
    printf("Массив чисел с цифрами, образующими арифм. прогрессию:\n");
    print_array(*new_array, *new_size);
    return 0;
}
