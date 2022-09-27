#define _CRT_SECURE_NO_WARNINGS
#include "Circle.h"
#include <iostream>
#define PI 3.14159265335

void CircleInit(Circle* c, int x, int y, int r) { //������������� ����������
    c->center.X = x;
    c->center.Y = y;
    c->R = r;
}

void CircleRead(Circle* c) { //���� ���������� � ����������
    printf("������� ���������� ������ ���������� (x, y): ");
    scanf("%d%d", &c->center.X, &c->center.Y);
    printf("������� ������ ���������� (R>0): ");
    scanf("%d", &c->R);
}

void CircleDisplay(Circle c) { //����� ����������
    printf("���������� c �������: �(%d,%d) � �������� R=%d\n", c.center.X, c.center.Y, c.R);
}

void CirclePrintEquation(Circle c) { //����� ��������� ����������
    puts("��������� ����������:");
    if (c.center.X > 0) {
        if (c.center.Y > 0)
            printf("(x-%d)^2+(y-%d)^2=%d\n", c.center.X, c.center.Y, c.R * c.R);
        if (c.center.Y < 0)
            printf("(x-%d)^2+(y+%d)^2=%d\n", c.center.X, -c.center.Y, c.R * c.R);
        if (c.center.Y == 0)
            printf("(x-%d)^2+y^2=%d\n", c.center.X, c.R * c.R);
    }
    if (c.center.X < 0) {
        if (c.center.Y > 0)
            printf("(x+%d)^2+(y-%d)^2=%d\n", -c.center.X, c.center.Y, c.R * c.R);
        if (c.center.Y < 0)
            printf("(x+%d)^2+(y+%d)^2=%d\n", -c.center.X, -c.center.Y, c.R * c.R);
        if (c.center.Y == 0)
            printf("(x+%d)^2+y^2=%d\n", -c.center.X, c.R * c.R);
    }
    if (c.center.X == 0) {
        if (c.center.Y > 0)
            printf("x^2+(y-%d)^2=%d\n", c.center.Y, c.R * c.R);
        if (c.center.Y < 0)
            printf("x^2+(y+%d)^2=%d\n", -c.center.Y, c.R * c.R);
        if (c.center.Y == 0)
            printf("x^2+y^2=%d\n", c.R * c.R);
    }
}

double CircleCalcSquare(Circle c) { //���������� ������� ����������
    double S;
    S = PI * c.R * c.R;
    return S;
}