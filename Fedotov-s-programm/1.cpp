#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int age, answer;

    printf("Введите год рождения:");
    scanf("%d", &age);

    answer = 2035 - age;
    printf("В 2035 году вм будте %d лет", answer);

    return(0);
}

