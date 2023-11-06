#include <stdlib.h>
#include "stdio.h"
#include "headers/memory.h"
#include "headers/initialize.h"
#include "headers/elements.h"
#include "headers/print.h"
#include "headers/task.h"


int main() {
    int *array = malloc(0), size = 0, capacity = 0;
    int *new_array = malloc(0), new_size = 0;

    printf(" (1) Перевыделить память\n"
           " (2) Инициализация массива\n"
           " (3) Вставить элемент\n"
           " (4) Удалить элемент\n"
           " (5) Вывести данные основного массива\n"
           " (6) Найти в основном массиве числа, образующие арифм. прогрессию\n"
           " (7) Вывести массив ответа\n"
           "(-1) Выход\n"
    );

    int command;
    scanf("%d", &command);
    while (1) {
        switch (command) {
            case 1:
                allocate_memory(&array, size, &capacity);
                break;
            case 2:
                initialize_array(array, &size, capacity);
                break;
            case 3:
                insert_elem(array, &size, capacity);
                break;
            case 4:
                delete_elem_dialog(array, &size, capacity);
                break;
            case 5:
                print_data(capacity, size);
                print_array(array, size);
                break;
            case 6:
                handle_data(array, &size, &new_array, &new_size);
                break;
            case 7:
                print_array(new_array, new_size);
                break;
            case -1:
                delete_array(array);
                delete_array(new_array);
                return 0;
            default:
                printf("Не поняли вас\n");
        }
        printf("\n (1) Перевыделить память\n"
               " (2) Инициализация массива\n"
               " (3) Вставить элемент\n"
               " (4) Удалить элемент\n"
               " (5) Вывести данные основного массива\n"
               " (6) Найти в основном массиве числа, образующие арифм. прогрессию\n"
               " (7) Вывести массив ответа\n"
               "(-1) Выход\n"
        );
        printf("\nВведите команду:\n");
        scanf("%d", &command);
    }
}