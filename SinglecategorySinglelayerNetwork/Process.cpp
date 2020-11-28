#include "Process.h"

int YPoint(int x, double* w, int carpan)
{
	return (int)((double)(-1 * (double)carpan * w[2] - w[0] * x) / (double)(w[1]));
}//(-1 * w2 - w0 * x) / w1