#include"consoleout.cpp"

using namespace std;


int main()
{
	double Temp_air = consoleinout::input_temp(); /*ввод тмпературы*/

	engines::Engine engine; /* создаем двигатель*/

	STAND::Testarea<engines::Engine> stand(engine, Temp_air); /* передаем двигатель в стэнд*/

	consoleinout::output_time(stand.StartEngine()); /* запуск стэнда\вывод результата*/

	return 0;
}

