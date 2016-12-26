#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include "goalFunction.h"

#define NH 3 // кол-во физических компьютеров (Размер парка)
#define NS 5 // кол-во логических серверов
#define NC 5 // кол-во типов ресурсов

using namespace std;

// TODO: Как правильно объявлять глобальные переменные??
// int NC; // Кол-во ресурсов
// int NX; // Кол-во ограничений на логические сервера

int main()
{
    generate(); // генерируем данные
    int N;

    vector <float> R;
    vector <float> b;
    vector <int> J;

    for (int i = 0; i < NH; ++i)
    {
        N = J.size(); // Кол-во нераспределенных логических серверов на шаге i
        R = Rik[i]; // Вытаскиваем конкретных физический комп
        b = calculate_hardware_capacity(R, Vi, Oi); // Рассчитываем его емкость

        for (int j = 0; j < NS; ++j)
        {
            check_first_unequality(Qij, Xj, b, N);
        }
    }
}

// Рассчет емкости физического сервера k по всем приоритетным ресурсам Oi
// bi = Rik - Vi
vector <float> calculate_hardware_capacity(vector < vector <float> > R, vector <float> Vi, vector <float> Oi)
{
    vector <float> b;
    for (int i = 0; i < NC; ++i)
    {
        if (R[i] > Vi[i])
        {
            b.push_back(R[i] - Vi[i]);
        }
        else
        {
            if (Oi[i])
            {
                printf("Приоритетного ресурса не хватает даже для работы операционной системы на компьютере k");
            }
        }
    }
    return b;
}

// Проверка вместимости ресурсов логических серверов в физический
// Sum(Qij *  Xj) <= bi
bool check_first_unequality(vector < vector <float> > Qij, vector <float> Xj, vector <float> b, int N)
{
    Float tmp;
    for (int i = 0; i < NC; ++i)
    {
        tmp = 0.0;
        for (int j = 0; j < N; ++j)
        {
            tmp += Qij[i][j]*X[j];
        }
        if (tmp > b[i])
        {
            printf("Не выполняется первого неравенства.\n Логические сервера требуют больше ресурсов, чем есть на физическом");
            return false;
        }
    }
    return true;
}

// Рассчет целевой функции
float calculate_goal_function(vector <int> X, vector <float> b, vector <float> coeff)
{
    int N = 3;
    float F = 0;
    float comp = 0;
    float prev1 = 0;
    float pnalti;

    vector <int> c;
    vector <int> x;

    for (int j = 0; j < N; ++j)
    {
        comp += c[j]*x[j];
    }
    for (int i = 0; i < M; ++j)
    {
        for (int j = 0; j < N; ++j)
        {
            prev1 += a[i][j]*x[j];
        }
        prev1 = prev1 - b[i];
        if (prev1 < 0) then
        {
            prev1 = 0;
        }
    }
    prev1 = prev1 * penalti;

    goal = comp - prev1;
    return F;
}