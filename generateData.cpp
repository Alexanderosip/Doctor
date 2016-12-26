#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "goalFunction.h"

using namespace std;

/*int main(){
    generate();
    return 0;
}*/

void generate(vector < vector <float> > Qij, vector < vector <float> > Rik, vector < vector <float> > Edj, vector <float> Vi, vector <int> Oi)
{
    vector <float> row;
    srand (time(NULL));
    float tmp = 0.0;

    // заполняем матрицу Rik
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

    // заполняем матрицу Qij
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

    // заполняем матрицу Edj
    for (int i = 0; i < NX; ++i)
    {
        for (int j = 0; j < NS; ++j)
        {
            row.push_back(rand() % 200 + 800 + tmp);
        }
        tmp += rand() % 300;
        Edj.push_back(row);
        row.clear();
    }

    // заполняем вектор Vi
    for (int i = 0; i < NC; ++i)
    {
        Vi.push_back(rand() % 100);
    }

    // заполняем вектор Oi
    for (int i = 0; i < NC; ++i)
    {
        Oi.push_back(rand() % 2);
    }

}

//Вывод сгенерированных матриц и векторов на стандартный вывод
void letsCheck(vector <vector <float> > Rik, vector <vector <float> > Qij, vector <float> Vi, vector <int> Oi)
{
    // печатаем R
    printf("Это матрица физических компов: \n\n");
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
    printf("\n");

    // печатаем Q
    printf("Это матрица логических серверов: \n\n");
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

    // печатаем E
    printf("Это матрица доп. ограничений: \n\n");
    for (int i = 0; i < NX; ++i)
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

    printf("Это вектор требований базовых ОС: \n");
    for (int i = 0; i < NC; ++i)
    {
        // cout << Vi[i] << " ";
        printf("%1.f ", Vi[i]);
    }
    // cout << endl;
    printf("\n");

    printf("Это вектор приоритетных ресурсов: \n");
    for (int i = 0; i < NC; ++i)
    {
        // cout << Oi[i] << " ";
        printf("%d ", Oi[i]);
    }
    // cout << endl;
    printf("\n");
}
