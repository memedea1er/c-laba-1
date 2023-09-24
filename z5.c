#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 2){ // проверка количества аргументов
        FILE *fp; // создание поинтера на файл
        fp = fopen(argv[1], "r"); // открытие файла
        if (fp == NULL){ // проверка файла на существование
            printf("Enter a file name: ./a.out filename.txt\n"); // вывод сообщения об ошибке
        }
        int symb = 0; // переменная для подсчета количества символов
        while (!feof (fp)) { // цикл для подсчета количества символов
            fgetc(fp); // чтение файла посимвольно
            symb++; // увеличение переменной
        }
        fclose(fp); // закрытие файла
        char st[symb+256]; // создание массива символов
        puts("Enter a sting to add to a file"); // вывод сообщения для пользователя
        fgets(st, 256, stdin); // ввод текста пользователем
        fp = fopen(argv[1], "r"); // открытие файла
        char ch; // переменная для чтения файла
        while (!feof (fp)) { // цикл для чтения файла
            strncat(st, &ch, 1); // добавление символа в строку
            ch = fgetc(fp); // чтение файла посимвольно
        }
        fclose(fp); // закрытие файла
        fp = fopen(argv[1], "w"); // открытие файла и стирание информации в нем
        fprintf(fp, "%s", st); // запись в файл
        fclose(fp); // закрытие файла
    }
    else{
        puts("Enter a file name: ./a.out filename.txt\n"); // вывод сообщения об ошибке
    }
    return 0;
}
