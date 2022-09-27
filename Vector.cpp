#define _CRT_SECURE_NO_WARNINGS
#include "Vector.h"
#include <iostream>

void VectorInit(Vector* v, int x, int y) { //������������� �������
    v->coord.X = x;
    v->coord.Y = y;
}

void VectorRead(Vector* v) { //���� ������� � ����������
    printf("������� ���������� ������� (x, y): ");
    scanf("%d%d", &v->coord.X, &v->coord.Y);

}

void VectorDisplay(Vector v) { //����� �������
    printf("������ � ������������: (%d,%d)\n", v.coord.X, v.coord.Y);
}


double VectCalcLen(Vector v) { //���������� ����� �������
    double len;
    len = sqrt(v.coord.X * v.coord.X + v.coord.Y * v.coord.Y);
    return len;
}

double CalcScalarProd(Vector v1, Vector v2) { //���������� ���������� ������������
    double prod;
    prod = v1.coord.X * v2.coord.X + v1.coord.Y * v2.coord.Y;
    return prod;
}