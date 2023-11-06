#include "stdio.h"
#include "../headers/print.h"


int _initialize_array(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        scanf("%d", array + i);
    }
    return 0;
}

int initialize_array(int *array, int *size, int capacity) {
    int wanted_size;
    printf("Доступно памяти: %d\nВведите размер массива:\n", capacity);
    scanf("%d", &wanted_size);

    if (wanted_size > capacity) {
        printf("Запрашиваемая длина больше доступного объема памяти\n");
        return 1;
    }

    *size = wanted_size;
    printf("Введите элементы массива:\n");
    _initialize_array(array, *size);
    print_data(capacity, *size);
    print_array(array, *size);
    return 0;
}
