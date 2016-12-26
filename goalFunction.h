#ifndef _TEST_H_
#define _TEST_H_

#include <vector>
using namespace std;

#define NH 4 // кол-во физических компьютеров (Размер парка)
#define NS 6 // кол-во логических серверов
#define NC 5 // кол-во типов ресурсов
#define NX 3 // кол-во доп. ограничений

extern void generate(vector < vector <float> > Qij, vector < vector <float> > Rik, vector < vector <float> > Edj, vector <float> Vi, vector <int> Oi); // функция генерирует данные
extern void letsCheck( vector <vector <float> > Qij, vector <vector <float> > Rik, vector < vector <float> > Edj, vector <float> Vi, vector <int> Oi);

vector <float> calculate_hardware_capacity(vector <float> R, vector <float> Vi, vector <float> Oi);
bool check_first_unequality(vector < vector <float> > Qij, vector <float> Xj, vector <float> b, int N);
float calculate_goal_function(vector <int> X, vector <float> b, vector <float> coeff);

#endif
