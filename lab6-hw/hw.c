#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int time(int seconds, int hours, int minutes)
{


    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;
    if (hours > 0) {
        printf("%d � ", hours);
    }
    if (minutes > 0 || hours > 0)
    {
        printf("%d ��� ", minutes);
    }
    printf("%d ���\n", seconds);
}

void main()
{
    setlocale(LC_ALL, "RUS");

    int seconds;
    int hours, minutes;
    time(seconds, hours, minutes);
    printf("������� ����� � ��������: ");
    scanf("%d", &seconds);
}