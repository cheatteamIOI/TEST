#include"consoleout.cpp"

using namespace std;


int main()
{
	double Temp_air = consoleinout::input_temp(); /*���� ����������*/

	engines::Engine engine; /* ������� ���������*/

	STAND::Testarea<engines::Engine> stand(engine, Temp_air); /* �������� ��������� � �����*/

	consoleinout::output_time(stand.StartEngine()); /* ������ ������\����� ����������*/

	return 0;
}

