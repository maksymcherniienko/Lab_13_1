//////////////////////////////////////////////////////////////////////////////
// dod.cpp
// файл реалізації функції

#include "dod.h"
#include "var.h"
#include<math.h>

using namespace nsDod;
using namespace nsVar;

void nsDod::dod() {
	R = (pow(x, 2) * (2 * n - 1)) / (2 * n + 1);
	a *= R;
};
