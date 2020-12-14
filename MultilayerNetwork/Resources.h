#pragma once

struct Samples
{
	double* x = new double[3]; //with BIAS
	int classId;
};

struct SampleColor
{
	int r;
	int g;
	int b;
};

struct SampleClass
{
	int classId;
	double* w;
	double o;
	SampleColor color;
};