#pragma once
#include "Point.h"

typedef struct {
    TPoint coord; //координаты вектора
} Vector;

void VectorInit(Vector* v, int x, int y); //инициализация вектора
void VectorRead(Vector* v); //ввод вектора с клавиатуры
void VectorDisplay(Vector v); //вывод вектора
double VectCalcLen(Vector v); //вычисление длины вектора
double CalcScalarProd(Vector v1, Vector v2); //вычисление скалярного произведения