#pragma once
#include<iostream>
#include<string>
using namespace std;
class BVklad
{
	string FIO;
	double summa;
	int procent;
public:
	BVklad(string fio, double s, int p);
	double K_redit(int year1);
	void print(int year2, double s2);
};
