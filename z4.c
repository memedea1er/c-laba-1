#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 2){ // проверка количества аргументов
        FILE *fp; // создание поинтера на файл
        fp = fopen(argv[1], "r"); // открытие файла
        if (fp == NULL){ // проверка файла на существование
            printf("Enter a file name: ./a.out filename.txt\n"); // вывод сообщения об ошибке
        }
        char ch; // переменная для чтения файла
        while (!feof (fp)) { // цикл для чтения файла
            printf("%c", ch); // вывод символов файла
            ch = fgetc(fp); // посимвольное чтение файла
        }
        fclose(fp); // закрытие файла
    }
    else{
        puts("Enter a file name: ./a.out filename.txt\n"); // вывод сообщения об ошибке
    }
    return 0;
}
