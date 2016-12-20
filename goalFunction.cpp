#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include "goalFunction.h"

using namespace std;

// TODO: Как правильно объявлять глобальные переменные??
int NC; // Кол-во ресурсов
int NX; // Кол-во ограничений на логические сервера

int main void()
{
    int N;
    Vector <float> b;
    N = sizeOf(J(T)); // Кол-во нераспределенных логических серверов на шаге T
    b = calculate_hardware_capacity(R, V, O);
    check_first_unequality(Qj, Xj, b);
    NH = sizeOf(NH)
    for (int i = 0; i < sizeOf(NH); ++i)
    {

    }
}

// Рассчет емкости физического сервера k по всем приоритетным ресурсам Oi
// bi = Rik - Vi
Vector <float> calculate_hardware_capacity(const Vector <float> R, const Vector <float> V, const Vector <float> O)
{
    Vector <float> b;
    for (int i = 0; i < NC; ++i)
    {
        if (R[i] > V[i])
        {
            b.pushBack(R[i] - V[i]);
        }
        else
        {
            if (O[i])
            {
                printf("Приоритетного ресурса не хватает даже для работы операционной системы на компьютере k")
                return -1;
            }
        }
    }
    return b;
}

// Проверка вместимости логики в физику
// Sum(Qij *  Xj) <= bi
Vector <float> check_first_unequality(Vector <float> Qj, Vector <float> Xj, Vector <float> b)
{
    bool sucess;
    for (int i = 0; i < NC; ++i)
    {
        tmp = 0;
        for (int j = 0; j < N; ++j)
        {
            tmp += Qj[j]*X[j];
        }
        if (tmp > b[i])
        {
            printf("Не выполняется первого неравенства.\n Логические сервера требуют больше ресурсов, чем есть на физическом");
            success = false;
        }
    }
}

// Рассчет целевой функции
float calculate_goal_function(Vector <int> X, Vector <float> b, Vector <float> coeff)
{
    float F = 0;
    for (int j = 0; j < N; ++j)
    {
        comp += c[j]*x[j];
    }
    for (int j = 0; j < N; ++j)
    {
        comp += c[j]*x[j];
    }
    return F;
}