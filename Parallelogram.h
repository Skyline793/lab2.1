#pragma once
#include "Vector.h"

//��������� ��������������
typedef struct {
    Vector a, b;
} Parallelogram;

void ParallelogramInit(Parallelogram* pr, int x1, int y1, int x2, int y2); //������������� ���������������
void ParallelogramRead(Parallelogram* pr); //���� ���������������
void ParallelogramDisplay(Parallelogram pr); //����� ���������������
double ParallelogramCalcSquare(Parallelogram pr); //���������� ������� ���������������