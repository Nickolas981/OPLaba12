#include"func.h"

double sum(int n, ...) {
	double sum = 0;
	int t;


	va_list argptr;

	va_start(argptr, n);
	for (; n; n--)
	{
		t = va_arg(argptr, int);
		for (int i = 1; i <= t; i++)
		{
			if (t%i == 0)
			{
				sum += i;
			}
		}

	}
	return sum;

	va_end(argptr);
}