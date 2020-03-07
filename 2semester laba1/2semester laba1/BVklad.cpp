#include"BVklad.h"
BVklad::BVklad(string fio, double s, int p)
{
	FIO = fio;
	summa = s;
	procent = p;
}
double BVklad::K_redit(int year1)
{
	double sum = summa;
	for (int i = 1; i <= year1; i++)
	{
		sum = sum + (sum * (procent / 100.));
	}
	return sum;
}
void BVklad::print(int year2, double s2)
{
	cout << "FIO:" << FIO << endl;
	cout << "summa:" << summa << endl;
	cout << "procent:" << procent << endl;
	cout << "total summa:" << K_redit(year2) << endl;
}

