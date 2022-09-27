#pragma once
#include "Point.h"

//структура треугольник
typedef struct {
    TPoint A, B, C;
} Triangle;

void TriangleInit(Triangle* t, int x1, int y1, int x2, int y2, int x3, int y3); //инициализация вершин треугольника
void TriangleRead(Triangle* t); //ввод вершин треугольника с клавиатуры
void TriangleDisplay(Triangle t); //вывод треугольника
double TriangleCalcSquare(Triangle t); //вычисление площади треугольника
double TriangleCalcPerimeter(Triangle t); //вычисление периметра треугольника