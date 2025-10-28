<h1>Домашняя работа к лабораторной №6</h1>
<h2>Выполнил: Бондарев Н.Р.</h2
<h2> Вариант 2</h2>
<h3>Условие задачи</h3>
<p>Написать программу, которая переводит время из секунд в целое
значение часов, минут, секунд (если значение часов равно 0, то слово час не
выводится.</p>
<h2> Алгоритм </h2>
1)Начало

2)Создаем переменные seconds, hours, minutes и просим ввести пользывателя с клавиатуры кол-во секунд

3)если (hours > 0), то printf("%d ч ", hours)

4)если (minutes > 0 || hours > 0), то printf("%d сек\n", seconds)

5)конец

<h2>Код программы</h2>

#define _CRT_SECURE_NO_DEPRECATE 

#include <stdio.h>

#include <locale.h>

int time(int seconds, int hours, int minutes)

{


    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;
    if (hours > 0) {
        printf("%d ч ", hours);
    }
    if (minutes > 0 || hours > 0)
    {
        printf("%d мин ", minutes);
    }
    printf("%d сек\n", seconds);
}

void main()

{

    setlocale(LC_ALL, "RUS");

    int seconds;
    int hours, minutes;
    time(seconds, hours, minutes);
    printf("Введите время в секундах: ");
    scanf("%d", &seconds);
}

<h2>Схема</h2>


<img width="576" height="783" alt="image" src="https://github.com/user-attachments/assets/8e30a08a-7302-4685-a995-8c3755c1612e" />


<h2>Консоль</h2>

<img width="308" height="52" alt="image" src="https://github.com/user-attachments/assets/2618171d-afa3-4584-aa9e-29feb89b028e" />



