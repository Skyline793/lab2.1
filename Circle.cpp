#define _CRT_SECURE_NO_WARNINGS
#include "Circle.h"
#include <iostream>
#define PI 3.14159265335

void CircleInit(Circle* c, int x, int y, int r) { //инициализация окружности
    c->center.X = x;
    c->center.Y = y;
    c->R = r;
}

void CircleRead(Circle* c) { //ввод окружности с клавиатуры
    printf("Введите координаты центра окружности (x, y): ");
    scanf("%d%d", &c->center.X, &c->center.Y);
    printf("Введите радиус окружности (R>0): ");
    scanf("%d", &c->R);
}

void CircleDisplay(Circle c) { //вывод окружности
    printf("Окружность c центром: О(%d,%d) и радиусом R=%d\n", c.center.X, c.center.Y, c.R);
}

void CirclePrintEquation(Circle c) { //вывод уравнения окружности
    puts("Уравнение окружности:");
    if (c.center.X > 0) {
        if (c.center.Y > 0)
            printf("(x-%d)^2+(y-%d)^2=%d\n", c.center.X, c.center.Y, c.R * c.R);
        if (c.center.Y < 0)
            printf("(x-%d)^2+(y+%d)^2=%d\n", c.center.X, -c.center.Y, c.R * c.R);
        if (c.center.Y == 0)
            printf("(x-%d)^2+y^2=%d\n", c.center.X, c.R * c.R);
    }
    if (c.center.X < 0) {
        if (c.center.Y > 0)
            printf("(x+%d)^2+(y-%d)^2=%d\n", -c.center.X, c.center.Y, c.R * c.R);
        if (c.center.Y < 0)
            printf("(x+%d)^2+(y+%d)^2=%d\n", -c.center.X, -c.center.Y, c.R * c.R);
        if (c.center.Y == 0)
            printf("(x+%d)^2+y^2=%d\n", -c.center.X, c.R * c.R);
    }
    if (c.center.X == 0) {
        if (c.center.Y > 0)
            printf("x^2+(y-%d)^2=%d\n", c.center.Y, c.R * c.R);
        if (c.center.Y < 0)
            printf("x^2+(y+%d)^2=%d\n", -c.center.Y, c.R * c.R);
        if (c.center.Y == 0)
            printf("x^2+y^2=%d\n", c.R * c.R);
    }
}

double CircleCalcSquare(Circle c) { //вычисление площади окружности
    double S;
    S = PI * c.R * c.R;
    return S;
}