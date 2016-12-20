#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;
#define NH 3 // кол-во физических компьютеров (Размер парка)
#define NS 5 // кол-во логических серверов
#define NC 5 // кол-во типов ресурсов
void letsCheck(vector <vector <float> > Rik, vector <vector <float> > Qij, vector <float> Vi);

int main ()
{
    vector < vector <float> > Qij; // Требования логических серверов по ресурсам
    vector < vector <float> > Rik; // Возможности физических компов по ресурсам
    vector <float> Vi; // Затраты на операционку

    vector <float> row;
    float tmp = 0.0;
    // заполняем Q
    for (int i = 0; i < NC; ++i)
    {
        for (int j = 0; j < NS; ++j)
        {
            row.push_back(rand() % 200 + 800 + tmp);
        }
        tmp += rand() % 300;
        Qij.push_back(row);
        row.clear();
    }
    // заполняем R
    for (int i = 0; i < NC; ++i)
    {
        for (int j = 0; j < NH; ++j)
        {
            row.push_back(rand() % 300 + 2000 + tmp);
        }
        tmp += rand() % 1000;
        Rik.push_back(row);
        row.clear();
    }
    letsCheck(Rik, Qij, Vi);
    return 0;
}
void letsCheck(vector <vector <float> > Rik, vector <vector <float> > Qij, vector <float> Vi)
{
    // печатаем Q
    printf("Это матрица логических серверов: \n");
    for (int i = 0; i < NC; ++i)
    {
        for (int j = 0; j < NS; ++j)
        {
            // cout << Qij[i][j] << " ";
            printf("%.1f ", Qij[i][j]);
        }
        // cout << endl;
        printf("\n");
    }
    printf("\n");
    // печатаем R
    printf("Это матрица физических компов: \n");
    for (int i = 0; i < NC; ++i)
    {
        for (int j = 0; j < NH; ++j)
        {
            // cout << Rik[i][j] << " ";
            printf("%.1f ", Rik[i][j]);
        }
        // cout << endl;
        printf("\n");
    }
}