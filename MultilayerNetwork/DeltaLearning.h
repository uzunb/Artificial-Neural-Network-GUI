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

	double FeedForward(Samples* input, int inputCount, int hiddenNeuronNumber, SampleClass* cls, int classCount, int numberOfClass, int d);
	void BackPropagation(Samples* input, int inputCount, SampleClass* cls, int classCount, int numberOfClass, int d, int hiddenNeuronNumber);

};
