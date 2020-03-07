#include"BVklad.h"
int main()
{
	int n;
	cout << "n="; cin >> n;
	int year;
	cout << "year="; cin >> year;
	BVklad** ppsystema;
	ppsystema = new BVklad * [n];
	for (int i = 0; i < n; i++)
	{
		cout << "Vklad_N" << (i + 1) << ";" << endl;
		string fio;
		cout << "FIO:"; cin >> fio;
		long s;
		cout << "s="; cin >> s;
		int p;
		cout << "p="; cin >> p;
		ppsystema[i] = new BVklad(fio, s, p);
		ppsystema[i]->print(year, s);
	}
	delete[] ppsystema;
	system("pause");
	return 0;
}
