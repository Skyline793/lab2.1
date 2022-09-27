#pragma once
#include "Point.h"

//��������� ����������
typedef struct {
    TPoint center; //���������� ������
    int R; //������
} Circle;

void CircleInit(Circle* c, int x, int y, int r); //������������� ����������
void CircleRead(Circle* c); //���� ���������� � ����������
void CircleDisplay(Circle c); //����� ����������
void CirclePrintEquation(Circle c); //����� ��������� ����������
double CircleCalcSquare(Circle c); //���������� ������� ����������