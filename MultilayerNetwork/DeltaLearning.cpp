#pragma once
#include "DeltaLearning.h"
#include <string>   //for memset


DeltaLearning::DeltaLearning()
{
	this->setLayerCount(1);
	this->setNeuronCount(1);
	this->setC(0.1);
	delta = 1;
}

DeltaLearning::~DeltaLearning()
{
}

void DeltaLearning::setEta(double muValue)
{
	this->eta = muValue;
}

void DeltaLearning::setDelta(double deltaValue)
{
	this->delta = deltaValue;
}

double DeltaLearning::getEta()
{
	return this->eta;
}

double DeltaLearning::getDelta()
{
	return this->delta;

}

void DeltaLearning::FeedForward(Samples p, int hiddenNeuronNumber, int classNumber)
{
	//desire value
	memset(d, -1, classNumber * sizeof(int));
	d[p.classId] = 1;

	//calculate y
	MatrixMultiplication(v, hiddenNeuronNumber, 3, p.x, 3, 1, y, "sigmoid", 1);
	y[hiddenNeuronNumber] = BIAS;

	//calculate o
	MatrixMultiplication(w, classNumber, (hiddenNeuronNumber + 1), y, (hiddenNeuronNumber + 1), 1, o, "sigmoid", 1);
	
}

void DeltaLearning::BackPropagation(double* x, int hiddenNeuronNumber, int classNumber, double& totalError)
{
	float mu1 = 0.5, mu2 = 0.7;
	//w weights updating
	for (int k = 0; k < classNumber; k++)
	{
		totalError += (d[k] - o[k]) * (d[k] - o[k]);
		double temp = mu1 * (d[k] - o[k]) * derivatedSigmoid(o[k]);
		for (int j = 0; j < (hiddenNeuronNumber + 1); j++)
			w[k * (hiddenNeuronNumber + 1) + j] += temp * y[j];
	}

	//v weights updating
	for (int j = 0; j < hiddenNeuronNumber; j++)
	{
		double total = 0.0;
		for (int k = 0; k < classNumber; k++)
			total += (d[k] - o[k]) * derivatedSigmoid(o[k]) * w[k * hiddenNeuronNumber + j];

		for (int ii = 0; ii < 3; ii++)
			v[j * 3 + ii] += mu2 * derivatedSigmoid(y[j]) * x[ii] * total;
	}
}

void DeltaLearning::BackPropagationWithMoment(double* x, int hiddenNeuronNumber, int classNumber, double& totalError)
{
	float mu1 = 0.5, mu2 = 0.7;
	//w weights updating
	for (int k = 0; k < classNumber; k++)
	{
		totalError += (d[k] - o[k]) * (d[k] - o[k]);
		double temp = mu1 * (d[k] - o[k]) * derivatedSigmoid(o[k]);
		for (int j = 0; j < (hiddenNeuronNumber + 1); j++) {
			int wIndex = k * (hiddenNeuronNumber + 1) + j;
			w[wIndex] += temp * y[j] + wRecent[wIndex];
			wRecent[wIndex] = mu1 * temp * y[j];
		}
	}
	//v weights updating
	for (int j = 0; j < hiddenNeuronNumber; j++)
	{
		double total = 0.0;
		for (int k = 0; k < classNumber; k++)
			total += (d[k] - o[k]) * derivatedSigmoid(o[k]) * w[k * hiddenNeuronNumber + j];

		mu2 = abs(v[j * 3 + 2] * x[0] + v[j * 3 + 1] * x[1] + v[j * 3] * x[2]) / (x[2] * x[0] + x[1] * x[1] + x[0] * x[2]);

		for (int ii = 0; ii < 3; ii++){ 
			int vIndex = j * 3 + ii;
			v[vIndex] += mu2 * derivatedSigmoid(y[j]) * x[ii] * total + vRecent[vIndex];
			vRecent[vIndex] = mu2 * derivatedSigmoid(y[j]) * x[ii] * total;

		}
	}
}


int DeltaLearning::Test(double* x, int hiddenNeuronNumber, int classNumber)
{
	//calculate y
	MatrixMultiplication(v, hiddenNeuronNumber, 3, x, 3, 1, y, "sigmoid", 1);
	y[hiddenNeuronNumber] = BIAS;

	//calculate o
	MatrixMultiplication(w, classNumber, (hiddenNeuronNumber + 1), y, (hiddenNeuronNumber + 1), 1, o, "sigmoid", 1);

	softmax(o, classNumber);

	double maxOutput = o[0];
	int iMax = 0;
	for (int i = 1; i < classNumber; i++)
		if (o[i] >= maxOutput) {
			maxOutput = o[i];
			iMax = i;
		}
	
	return iMax;
}



void DeltaLearning::Train(Samples* input, double* w, int inputCount, SampleClass* cls, int numberOfClass, int& jeneration)
{
	//FeedForward(input, inputCount, )


}