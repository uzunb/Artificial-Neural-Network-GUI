#include "NeuralNetwork.h"
#include <math.h>

void NeuralNetwork::setLayerCount(int count)
{
    this->layerCount = count;
}

void NeuralNetwork::setNeuronCount(int count)
{
    this->neuronCount = count;
}

void NeuralNetwork::setInput(int* input)
{
    this->input = input;
}

void NeuralNetwork::setOutput(int* output)
{
    this->output = output;
}

void NeuralNetwork::setC(double c)
{
    this->c = c;
}

int NeuralNetwork::getLayerCount()
{
    return this->layerCount;
}

int NeuralNetwork::getNeuronCount()
{
    return this->neuronCount;
}

int* NeuralNetwork::getInput()
{
    return this->input;
}

int* NeuralNetwork::getOutput()
{
    return this->output;
}

double NeuralNetwork::getC()
{
    return this->c;
}

//Activation functions

void NeuralNetwork::batchNormalizing(Samples* input, int inputCount)
{
	double totalX, totalY, meanX, meanY, varianceX, varianceY;

	//Calculate Means
	totalX = totalY = 0;
	for (int i = 0; i < inputCount; i++) {
		totalX += input[i].x1;
		totalY += input[i].x2;
	}

	meanX = totalX / inputCount;
	meanY = totalY / inputCount;

	//Calculate Variances
	totalX = totalY = 0;
	for (int i = 0; i < inputCount; i++)
	{
		totalX += pow(input[i].x1 - meanX, 2);
		totalY += pow(input[i].x2 - meanY, 2);
	}

	varianceX = totalX / inputCount;
	varianceY = totalY / inputCount;

	//Assign new normalized locations.
	for (int i = 0; i < inputCount; i++)
	{
		input[i].x1 = (input[i].x1 - meanX) / sqrt(varianceX);
		input[i].x2 = (input[i].x2 - meanY) / sqrt(varianceY);
	}
}

int NeuralNetwork::sgn(int number)
{
	return number >= 0 ? 1 : -1;
}

double NeuralNetwork::sigmoid(double net, double delta)
{
	try {
		return 2 / (1 + exp(-delta * net) - 1);
	}
	catch (...) {
		return this->sgn(2 / (1 + exp(-delta * net) - 1));
	}
}

double NeuralNetwork::derivatedSigmoid(double net, double output)
{
	return (1 - pow(output, 2)) / 2;
}

double NeuralNetwork::logistic(double net)
{
	return 1 / (1 + exp(-net));
}

double NeuralNetwork::tanH(double net)
{
	return (2 / (1 + exp(-2 * net))) - 1;
}

double NeuralNetwork::reLU(double net)
{
	return net < 0 ? 0 : net;
}

double NeuralNetwork::leakyReLU(double net)
{
	return net < 0 ? 0.01 * net : net;
}

double NeuralNetwork::softmax(double net)
{
	//for multiply output .
	return 0.0;
}

