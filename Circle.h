#pragma once
#include "Point.h"

//структура окружность
typedef struct {
    TPoint center; //координаты центра
    int R; //радиус
} Circle;

void CircleInit(Circle* c, int x, int y, int r); //инициализация окружности
void CircleRead(Circle* c); //ввод окружности с клавиатуры
void CircleDisplay(Circle c); //вывод окружности
void CirclePrintEquation(Circle c); //вывод уравнения окружности
double CircleCalcSquare(Circle c); //вычисление площади окружности