#include "goalFunction.h"

using namespace std;
#define NH 3 // кол-во физических компьютеров (Размер парка)
#define NS 5 // кол-во логических серверов
#define NC 5 // кол-во типов ресурсов

// TODO: Как правильно объявлять глобальные переменные??
int NC; // Кол-во ресурсов
int NX; // Кол-во ограничений на логические сервера

int main()
{
    int N;
    int T; // номер итерации
    R, V, O;
    float b = 0;

    vector <float> b;
    vector <int> J;

    N = sizeOf(J(T)); // Кол-во нераспределенных логических серверов на шаге T
    b = calculate_hardware_capacity(R, V, O);
    check_first_unequality(Qj, Xj, b);
    NH = sizeOf(NH);
    for (int i = 0; i < sizeOf(NH); ++i)
    {

    }
}

// Рассчет емкости физического сервера k по всем приоритетным ресурсам Oi
// bi = Rik - Vi
vector <float> calculate_hardware_capacity(vector <float> R, vector <float> V, vector <float> O)
{
    vector <float> b;
    for (int i = 0; i < NC; ++i)
    {
        if (R[i] > V[i])
        {
            b.push_back(R[i] - V[i]);
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
vector <float> check_first_unequality(vector <float> Qj, vector <float> Xj, vector <float> b)
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
float calculate_goal_function(vector <int> X, vector <float> b, vector <float> coeff)
{
    int N = 3;
    float F = 0;
    float comp = 0;
    vector <int> c;
    vector <int> x;
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