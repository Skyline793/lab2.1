#pragma once
#include "Vector.h"

//структура параллелограмм
typedef struct {
    Vector a, b;
} Parallelogram;

void ParallelogramInit(Parallelogram* pr, int x1, int y1, int x2, int y2); //инициализация параллелограмма
void ParallelogramRead(Parallelogram* pr); //ввод параллелограмма
void ParallelogramDisplay(Parallelogram pr); //вывод параллелограмма
double ParallelogramCalcSquare(Parallelogram pr); //вычисление площади параллелограмма