#define _CRT_SECURE_NO_WARNINGS
#include "Parallelogram.h"
#include <iostream>

void ParallelogramInit(Parallelogram* pr, int x1, int y1, int x2, int y2) { //инициализаци€ параллелограмма
    VectorInit(&pr->a, x1, y1);
    VectorInit(&pr->b, x2, y2);
}

void ParallelogramRead(Parallelogram* pr) { //ввод параллелограмма
    int x1, y1, x2, y2;
    printf("¬ведите координаты первого из векторов, на которых построен параллелограмм (x1, y1): ");
    scanf("%d%d", &x1, &y1);
    printf("¬ведите координаты второго из векторов, на которых построен параллелограмм (x1, y1): ");
    scanf("%d%d", &x2, &y2);
    ParallelogramInit(pr, x1, y1, x2, y2);
}

void ParallelogramDisplay(Parallelogram pr) { //вывод параллелограмма 
    puts("параллелограмм, построенный на векторах a и b:");
    VectorDisplay(pr.a);
    VectorDisplay(pr.b);
}

double ParallelogramCalcSquare(Parallelogram pr) { //вычисление площади параллелограмма
    double S, len_a, len_b, prod, cosinus, sinus;
    len_a = VectCalcLen(pr.a);
    len_b = VectCalcLen(pr.b);
    prod = CalcScalarProd(pr.a, pr.b);
    cosinus = prod / (len_a * len_b);
    sinus = sqrt(1 - cosinus * cosinus);
    S = len_a * len_b * sinus;
    return S;
}