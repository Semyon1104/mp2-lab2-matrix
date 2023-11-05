// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
#include <ctime>
//---------------------------------------------------------------------------
TDynamicVector<int> input_vector(TDynamicVector<int> v1, int n) {
    for (int i = 0; i < n; i++) {
        v1[i] = 0 + rand() % 101;
    }
    return v1;
}
TDynamicMatrix<int> input_matrix(TDynamicMatrix<int> m1, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            m1[i][j] = 0 + rand() % 101;
        }
    }
    return m1;
}

int main()
{
    /*int n;
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    cout << "Тестирование классa работы с матрицами"
        << endl;
     cout << "Введите размер вектора" << endl;
     cin >> n;
     TDynamicVector<int> v1(n), v2(n), v3(n);
     v1 = input_vector(v1, n);
     v2 = input_vector(v2, n);

     cout << "Vector a = " << endl << v1 << endl;
     cout << "Vector b = " << endl << v2 << endl;
     v3 = v1 * 3;
     cout << "Векторно-скалярные операции:" << endl << "Vector c = a * 3" << endl << v3 << endl;
     v3 = v1 + 3;
     cout << "Vector c = a + 3" << endl << v3 << endl;
     v3 = v1 - 3;
     cout << "Vector c = a - 3" << endl << v3 << endl;

     int a = v1 * v2;
     cout << "Векторно-векторные операции:" << endl << "Vector c = a * b" << endl << a << endl;
     v3 = v1 + v2;
     cout << "Vector c = a + b" << endl << v3 << endl;
     v3 = v1 - v2;
     cout << "Vector c = a - b" << endl << v3 << endl;


     cout << "Введите размер матрицы" << endl;
     cin >> n;
     TDynamicMatrix<int> m1(n), m2(n), m3(n);
     m1 = input_matrix(m1, n);
     m2 = input_matrix(m2, n);
     cout << "Matrix a = " << endl << m1 << endl;
     cout << "Matrix b = " << endl << m2 << endl;
     m3 = m1 * 3;
     cout << "Матрично-скалярные операции:"<<endl<<"Matrix c = a * 3" << endl << m3 << endl;
     m3 = m1 + m2;
     cout << "Матрично-векторные операции:" << endl << "Matrix c = a + b" << endl << m3 << endl;
     m3 = m1 - m2;
     cout << "Matrix c = a - b" << endl << m3 << endl;
     m3 = m1 * m2;
     cout << "Matrix c = a * b" << endl << m3 << endl;



     v3 = m1 * v2;
     cout << "Матрично-векторные операции:" << endl << "Vector m3 = m1 * v2" << endl << v3 << endl;*/







     //exp-s
     setlocale(LC_ALL, "Russian");
     int n;
     time_t start, end;
     cout << "Введите размер матриц" << endl;
     cin >> n;
     double d = 0;
     TDynamicMatrix<int> m1(n), m2(n), m3(n);
     m1 = input_matrix(m1, n);
     m2 = input_matrix(m2, n);
     time(&start);
     m3 = m1 + m2;
     time(&end);
     d = (d + (double)(end - start) / CLOCKS_PER_SEC) * 1000;
     cout << "O(n^2) - " << d << endl;
     d = 0;
     TDynamicMatrix<int> m11(n), m22(n), m33(n);
     m11 = input_matrix(m1, n);
     m22 = input_matrix(m2, n);
     time(&start);
     m33 = m11 * m22;
     time(&end);
     d = (d + (double)(end - start) / CLOCKS_PER_SEC)*1000;
     cout << "O(n^3) - " << d << endl;



}
//---------------------------------------------------------------------------
