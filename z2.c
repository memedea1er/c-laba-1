#include <stdio.h>

void main(){
    double a, b, c, x; // задание переменных
    puts("Enter A"); // вывод сообщения
    scanf("%lf", &a); // ввод a
    puts("Enter B"); // вывод сообщения
    scanf("%lf", &b); // ввод b
    puts("Enter C"); // вывод сообщения
    scanf("%lf", &c); // ввод c
    x=(c-b)/a; // вычисление x
    printf("x=%lf\n",x); // вывод результата
}