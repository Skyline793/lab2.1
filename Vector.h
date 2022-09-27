#pragma once
#include "Point.h"

typedef struct {
    TPoint coord; //���������� �������
} Vector;

void VectorInit(Vector* v, int x, int y); //������������� �������
void VectorRead(Vector* v); //���� ������� � ����������
void VectorDisplay(Vector v); //����� �������
double VectCalcLen(Vector v); //���������� ����� �������
double CalcScalarProd(Vector v1, Vector v2); //���������� ���������� ������������