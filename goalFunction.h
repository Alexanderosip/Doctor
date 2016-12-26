
#ifndef _TEST_H_
#define _TEST_H_

void generate(); // функция генерирует данные
void letsCheck(vector <vector <float> > Rik, vector <vector <float> > Qij, vector <float> Vi, vector <int> Oi);

vector <float> calculate_hardware_capacity(vector <float> R, vector <float> Vi, vector <float> Oi);
bool <float> check_first_unequality(vector < vector <float> > Qij, vector <float> Xj, vector <float> b, int N);
float calculate_goal_function(vector <int> X, vector <Float> b, vector <float> coeff);

#endif
