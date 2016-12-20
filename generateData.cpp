#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;
#define NH 3 // кол-во физических компьютеров (Размер парка)
#define NS 5 // кол-во логических серверов
#define NC 5 // кол-во типов ресурсов

int main void()
{
    Vector < Vector <float> > Qij; // Требования логических серверов по ресурсам
    Vector < Vector <float> > Rik; // Возможности физических компов по ресурсам
    Vector <float> Vi; // Затраты на операционку

    Vector <float> string;
    Vector <float> column;
    float tmp = 0.0;
    // заполняем Q
    for (int i = 0; i < NC; ++i)
    {
        for (int i = 0; i < NS; ++i)
        {
            column.pushBack(rand() % 200 + 800 + tmp);
        }
        tmp += rand() % 300;
        Qij.pushBack(column);
        column.clear();
    }
    // заполняем R
    for (int i = 0; i < NC; ++i)
    {
        for (int i = 0; i < NH; ++i)
        {
            column.pushBack(rand() % 300 + 2000 + tmp);
        }
        tmp += rand() % 1000;
        Rik.pushBack(column);
        column.clear()
    }
}