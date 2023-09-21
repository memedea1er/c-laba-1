#include <stdio.h>

int main(int argc, char *argv[]) // argc - счетчик аргументов, argv - аргумент
{
    if (argc > 1) { // проверка на существование аргументов
        for (int i = 1; i < argc; i++) { // цикл перебора аргументов
            printf("Argument %d: %s\n", i, argv[i]); // вывод аргументов под номером
        }
    }
    return 0;
}