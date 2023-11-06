#include "stdio.h"
#include "../headers/print.h"


int _insert_elem(int *array, int *size, int index, int elem) {
    int buff;
    for (int i = index; i < *size; ++i) {
        buff = *(array + i + 1);
        *(array + i + 1) = *(array + index);
        *(array + index) = buff;
    }
    *(array + index) = elem;
    *size += 1;
    return 0;
}

int insert_elem(int *array, int *size, int capacity) {
    if (*size >= capacity) {
        printf("Недостаточный объем памяти\n");
        return 0;
    }

    int index, elem;
    printf("Введите индекс для вставки:\n");
    scanf("%d", &index);
    if (index > *size) {
        printf("Введенный индекс больше, чем длина массива.\n"
               "Элемент будет вставлен в конец массива.\n");
        index = *size;
    }
    printf("Введите значение элемента:\n");
    scanf("%d", &elem);

    _insert_elem(array, size, index, elem);
    print_data(capacity, *size);
    print_array(array, *size);
    return 0;
}

int _delete_elem(int *array, int *size, int index) {
    for (int i = index; i < *size; ++i) {
        *(array + i) = *(array + i + 1);
    }
    *size -= 1;
    return 0;
}

int delete_elem(int *array, int *size, int index) {
    if (index >= *size) {
        index = *size - 1;
    }
    _delete_elem(array, size, index);
    return 0;
}

int delete_elem_dialog(int *array, int *size, int capacity) {
    int index;
    printf("Введите индекс элемента для удаления:\n");
    scanf("%d", &index);

    if (index >= *size) {
        printf("Введенный индекс больше индекса последнего элемента массива.\n"
               "Будет удален последний элемент.\n");
        index = *size - 1;
    }

    _delete_elem(array, size, index);
    print_data(capacity, *size);
    print_array(array, *size);
    return 0;
}

