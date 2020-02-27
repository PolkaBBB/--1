#include<iostream>
using namespace std;
class BVklad
{
	string FIO;
	double summa;
	int procent;
public:
	BVklad(string fio, double s, int p)
	{
		FIO = fio;
		summa = s;
		procent = p;
	}
	double K_redit(int year1)
	{	
		double sum = summa;
		for (int i = 1; i <= year1; i++)
		{
			sum = sum + (sum * (procent/100.));
		}
		return sum;
	}
	void print(int year2, double s2)
	{
		cout << "FIO:" << FIO << endl;
		cout << "summa:" << summa << endl;
		cout << "procent:" << procent << endl;
		cout << "total summa:" << K_redit(year2) << endl;
	}
};
int main()
{
	int n;
	cout << "n="; cin >> n;
	int year;
	cout << "year="; cin >> year;
	BVklad** ppsystema;
	ppsystema = new BVklad * [n];
	for (int i = 0; i<n; i++)
	{
		cout << "Vklad_N" << (i + 1) << ";" << endl;
		string fio;
		cout << "FIO:"; cin >> fio;
		long s;
		cout << "s="; cin >> s;
		int p;
		cout << "p="; cin >> p;
		ppsystema[i] = new BVklad(fio, s, p);
		ppsystema[i]->K_redit(year);
		ppsystema[i]->print(year, s);
	}
	system("pause");
	return 0;
}
