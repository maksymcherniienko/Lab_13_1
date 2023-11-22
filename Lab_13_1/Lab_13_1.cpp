//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main

#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "|x| < 1" << endl << endl;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(4) << "x" << "    | "
		<< setw(16) << "log((1+x)/(1-x))" << " |"
		<< setw(6) << "S" << "     |"
		<< setw(4) << "n" << "   |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	
	x = xp;
	while (x <= xk)
	{
		sum();
		cout << "|" << setw(6) << setprecision(2) << x << "  |"
			<< setw(13) << setprecision(5) << log((1 + x) / (1 - x)) << "     |"
			<< setw(9) << setprecision(5) << 2 * s << "  |"
			<< setw(4)<< setprecision(0) << n << "   |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}