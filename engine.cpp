#include <stdio.h>
#include<iostream>
#include <math.h>
#include <vector>

using namespace std;

namespace engines
{
	struct Engine
	{

		double C = 0.1;
		double I = 10;
		vector <double> M = { 20, 75, 100, 105, 75, 0 };
		vector <double> V = { 0, 75, 150, 200, 250, 300 };
		double V_curr;
		double M_curr;
		double T_overtemp = 110;
		double H_M = 0.01;
		double H_V = 0.0001;
		double V_H;
		double V_C;
		double a;

		double get_V_H()
		{
			return M_curr * H_M + pow(V_curr, 2) * H_V;
		}

		double get_V_C(double T_air, double T_eng)
		{
			return C * (T_air - T_eng);
		}

		double get_a()
		{
			return  M_curr / I;;
		}



	};
}
