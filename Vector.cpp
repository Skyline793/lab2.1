#define _CRT_SECURE_NO_WARNINGS
#include "Vector.h"
#include <iostream>

void VectorInit(Vector* v, int x, int y) { //инициализация вектора
    v->coord.X = x;
    v->coord.Y = y;
}

void VectorRead(Vector* v) { //ввод вектора с клавиатуры
    printf("Введите координаты вектора (x, y): ");
    scanf("%d%d", &v->coord.X, &v->coord.Y);

}

void VectorDisplay(Vector v) { //вывод вектора
    printf("Вектор с координатами: (%d,%d)\n", v.coord.X, v.coord.Y);
}


double VectCalcLen(Vector v) { //вычисление длины вектора
    double len;
    len = sqrt(v.coord.X * v.coord.X + v.coord.Y * v.coord.Y);
    return len;
}

double CalcScalarProd(Vector v1, Vector v2) { //вычисление скалярного произведения
    double prod;
    prod = v1.coord.X * v2.coord.X + v1.coord.Y * v2.coord.Y;
    return prod;
}