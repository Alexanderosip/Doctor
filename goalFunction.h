
#ifndef _TEST_H_
#define _TEST_H_

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>

extern void generate(); // генерируем данные

vector <float> calculate_hardware_capacity(vector <float> R, vector <float> V, vector <float> O);
vector <float> check_first_unequality(vector <float> Qj, vector <float> Xj, vector <float> b);
float calculate_goal_function(vector <int> X, vector <Float> b, vector <float> coeff);

#endif
