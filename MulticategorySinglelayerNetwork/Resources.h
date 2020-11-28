#pragma once

struct Samples
{
	double x1;
	double x2;
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
	SampleColor color;
};