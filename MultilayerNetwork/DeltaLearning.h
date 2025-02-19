#pragma once
#include <math.h> 
#include "NeuralNetwork.h"

#define BIAS -1

class DeltaLearning : public NeuralNetwork
{
private:
	double eta;
	double delta;

public:
	DeltaLearning();
	~DeltaLearning();

	void setEta(double muValue);
	void setDelta(double deltaValue);
	double getEta();
	double getDelta();

	void Train(Samples* input, double* output, int inputCount, SampleClass* cls, int numberOfClass, int& jeneration);

	void FeedForward(Samples p, int hiddenNeuronNumber, int classNumber);
	void BackPropagation(double* x, int hiddenNeuronNumber, int classNumber, double& totalError);
	void BackPropagationWithMoment(double* x, int hiddenNeuronNumber, int classNumber, double& totalError);
	int Test(double* x, int hiddenNeuronNumber, int classNumber);
};

