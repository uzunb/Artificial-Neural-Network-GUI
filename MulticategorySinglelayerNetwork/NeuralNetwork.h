#pragma once
#include "Resources.h"

class NeuralNetwork
{
private:
	int* input;
	int* output;
	int layerCount;
	int neuronCount;
	double c; //learning constant

public:
	void setLayerCount(int count);
	void setNeuronCount(int count);
	void setInput(int* input);
	void setOutput(int* output);
	void setC(double c);
	int  getLayerCount();
	int  getNeuronCount();
	int* getInput();
	int* getOutput();
	double getC();

	virtual void Train(Samples* input, double* output, int inputCount, SampleClass* cls, int numberOfClass, int& epoch, double &loss) = 0;

	void BatchNormalizing(Samples* input, int inputCount);

	//Activation functions
	int sgn(int number);
	double sigmoid(double net, double delta);
	double derivatedSigmoid(double output, int desiredValue);
	double logistic(double net);
	double tanH(double net);		// Hyperbolic Tangent
	double reLU(double net);		// Rectified Linear Unit
	double leakyReLU(double net);
	double softmax(double net);
};

