#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;
#define NH 3 // кол-во физических компьютеров (Размер парка)
#define NS 5 // кол-во логических серверов
#define NC 5 // кол-во типов ресурсов

int main ()
{
    vector < vector <float> > Qij; // Требования логических серверов по ресурсам
    vector < vector <float> > Rik; // Возможности физических компов по ресурсам
    vector <float> Vi; // Затраты на операционку

    vector <float> string;
    vector <float> column;
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
        column.clear();
    }
    letsCheck(Rik, Qij, Vi);
    return 0;
}
void letsCheck(vector <vector <float> > Rik, vector <vector <float> > Qij, vector <float> Vi);
void letsCheck(vector <vector <float> > Rik, vector <vector <float> > Qij, vector <float> Vi)
{
    // печатаем Q
    for (int i = 0; i < NC; ++i)
    {
        for (int i = 0; i < NS; ++i)
        {
            cout << Q[i][j] << " ";
            // printf("%f ", Q[i][j]);
        }
        cout << endl;
        // printf("\n");
    }
    // печатаем R
    for (int i = 0; i < NC; ++i)
    {
        for (int i = 0; i < NH; ++i)
        {
            cout << R[i][j] << " ";
            // printf("%f ", R[i][j]);
        }
        cout << endl;
        // printf("\n");
    }
}