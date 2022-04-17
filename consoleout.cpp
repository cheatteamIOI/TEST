#include "testarea.cpp"

using namespace std;

namespace consoleinout
{
	inline double input_temp()
	{
		double Temp_air;

		cout << "Enter the temperature" << endl;

		cin >> Temp_air;

		return Temp_air;
	}

	inline void output_time(const int time_out)
	{
		if (time_out == MAX_TIME)
			cout << endl << "At this ambient temperature, the engine does not overheat." << endl;
		else
			cout << "Time overheating: " << time_out << " sec";
	}
}