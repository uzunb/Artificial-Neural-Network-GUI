#include "Process.h"

int YPoint(int x, double* w, int factor)
{
	return (int)((double)(1 * (double)factor * w[2] - w[0] * x) / (double)(w[1]));
}