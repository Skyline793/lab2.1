// lab2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include "Vector.h"
#include "Circle.h"
#include "Triangle.h"
#include "Parallelogram.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    puts("Тест структуры вектор:");
    Vector* V1, * V2;
    V1 = (Vector*)calloc(1, sizeof(Vector));
    V2 = (Vector*)calloc(1, sizeof(Vector));
    puts("Ввод координат векторов:");
    VectorRead(V1);
    VectorRead(V2);
    puts("\nВывод координат векторов:");
    VectorDisplay(*V1);
    VectorDisplay(*V2);
    printf("\nМодуль вектора |V1|=%g\nМодуль вектора |V2|=%g\n", VectCalcLen(*V1), VectCalcLen(*V2));
    printf("Скалярное произведение (V1, V2)=%g\n", CalcScalarProd(*V1, *V2));
    free(V1);
    free(V2);

    puts("\n\nТест структуры окружность:");
    Circle krug;
    puts("\nИнициализация окружности:");
    CircleInit(&krug, 0, 0, 2);
    CircleDisplay(krug);
    puts("\nВвод данных окружности:");
    CircleRead(&krug);
    CircleDisplay(krug);
    puts("\nВывод уравнения окружности:");
    CirclePrintEquation(krug);
    printf("\nПлощадь круга S=%g\n", CircleCalcSquare(krug));

    puts("\n\nТест структуры треугольник:");
    Triangle* tr;
    tr = (Triangle*)calloc(1, sizeof(Triangle));
    puts("\nИнициализация треугольника:");
    TriangleInit(tr, 3, 4, 0, -2, -1, 6);
    TriangleDisplay(*tr);
    puts("\nВвод координат вершин треугольника:");
    TriangleRead(tr);
    TriangleDisplay(*tr);
    printf("\nПлощадь треугольника S=%g\nПериметр треугольникаP=%g", TriangleCalcSquare(*tr), TriangleCalcPerimeter(*tr));
    free(tr);

    puts("\n\nТест структуры параллелограмм:");
    Parallelogram pr;
    puts("\nИнициализация параллелограмма:");
    ParallelogramInit(&pr, 1, 4, 5, -3);
    ParallelogramDisplay(pr);
    puts("\nВвод координат векторов, на которых построен параллелограмм:");
    ParallelogramRead(&pr);
    ParallelogramDisplay(pr);
    printf("\nПлощадь параллелограмма S=%g", ParallelogramCalcSquare(pr));

    std::cin.get(); std::cin.get();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
