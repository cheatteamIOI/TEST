#include"engine.cpp"

#define MAX_TIME 1000

using namespace std;

namespace STAND {
	template <typename T>
	class Testarea
	{
		int n_number;
		double T_eng;
		double T_air;
		T* engine;

	public:
		int StartEngine();
		Testarea(T &engine, const double T_air);

	};
	template<typename T>
	Testarea<T>::Testarea(T& engine, const double T_air)
	{
		n_number = 0;

		this->engine = &engine;
		this->engine->M_curr = engine.M[n_number];
		this->engine->V_curr = engine.V[n_number];

		this->T_air = T_air;
		this->T_eng = this->T_air;
	}
	

	template<typename T>
	int Testarea<T>::StartEngine()
	{
		double a;

		int time = 0;

		while (time  <  MAX_TIME  &&  this->T_eng  <  engine->T_overtemp)
		{
			a = engine->get_a();

			engine->V_curr += a;

			if (n_number  <  engine->M.size() - 2  &&  engine->V_curr  >=  engine->V[n_number + 1])
				n_number += 1;

			double modific_m = engine->V[n_number] / engine->V_curr;

			engine->M_curr += engine->M[n_number] * modific_m;

			T_eng += engine->get_V_C(T_air, T_eng) + engine->get_V_H();

			time++;
		}
		return time;
	}

}