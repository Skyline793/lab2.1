#define _CRT_SECURE_NO_WARNINGS
#include "Triangle.h"
#include <iostream>

void TriangleInit(Triangle* t, int x1, int y1, int x2, int y2, int x3, int y3) { //инициализация вершин треугольника
    t->A.X = x1;
    t->A.Y = y1;
    t->B.X = x2;
    t->B.Y = y2;
    t->C.X = x3;
    t->C.Y = y3;
}

void TriangleRead(Triangle* t) { //ввод вершин треугольника с клавиатуры
    printf("Введите координаты точки А треугольника (x1, y1): ");
    scanf("%d%d", &t->A.X, &t->A.Y);
    printf("Введите координаты точки B треугольника (x2, y2): ");
    scanf("%d%d", &t->B.X, &t->B.Y);
    printf("Введите координаты точки C треугольника (x3, y3): ");
    scanf("%d%d", &t->C.X, &t->C.Y);
}

void TriangleDisplay(Triangle t) { //вывод треугольника
    printf("Треугольник с вершинами А(%d,%d), B(%d,%d), C(%d,%d)\n", t.A.X, t.A.Y, t.B.X, t.B.Y, t.C.X, t.C.Y);

}

double TriangleCalcSquare(Triangle t) { //вычисление площади треугольника
    int x1 = t.A.X, y1 = t.A.Y, x2 = t.B.X, y2 = t.B.Y, x3 = t.C.X, y3 = t.C.Y;
    double S;
    S = 0.5 * fabs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
    return S;
}

double TriangleCalcPerimeter(Triangle t) { //вычисление периметра треугольника
    int x1 = t.A.X, y1 = t.A.Y, x2 = t.B.X, y2 = t.B.Y, x3 = t.C.X, y3 = t.C.Y;
    double AB = sqrt((x2 - x1) ^ (x2 - x1) + (y2 - y1) ^ (y2 - y1));
    double AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double P = AB + AC + BC;
    return P;
}
