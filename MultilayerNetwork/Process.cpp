#include "Process.h"

int YPoint(int x, double* w, int carpan)
{
	return (int)((double)((double)carpan * w[2] - x * w[0]) / (double)(w[1]));

}//(-1 * w2 - w0 * x) / w1
//(cls[i].w[2] - minX * cls[i].w[0]) / cls[i].w[1];