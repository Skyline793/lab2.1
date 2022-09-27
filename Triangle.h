#pragma once
#include "Point.h"

//��������� �����������
typedef struct {
    TPoint A, B, C;
} Triangle;

void TriangleInit(Triangle* t, int x1, int y1, int x2, int y2, int x3, int y3); //������������� ������ ������������
void TriangleRead(Triangle* t); //���� ������ ������������ � ����������
void TriangleDisplay(Triangle t); //����� ������������
double TriangleCalcSquare(Triangle t); //���������� ������� ������������
double TriangleCalcPerimeter(Triangle t); //���������� ��������� ������������