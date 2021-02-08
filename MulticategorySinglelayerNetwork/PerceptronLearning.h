#pragma once
#include "NeuralNetwork.h"

#define DIMENSION 2
#define BIAS -1

class PerceptronLearning : public NeuralNetwork
{
public:
	PerceptronLearning();
	~PerceptronLearning();

	void Train(Samples* input, double* output, int numberOfInputs, SampleClass* cls, int numberOfClass, int &jeneration, double& loss);

};

