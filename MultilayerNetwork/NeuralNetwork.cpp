#pragma once
#include "NeuralNetwork.h"
#include <math.h>
#include <iostream>

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
		totalX += input[i].x[0];
		totalY += input[i].x[1];
	}

	meanX = totalX / inputCount;
	meanY = totalY / inputCount;

	//Calculate Variances
	totalX = totalY = 0;
	for (int i = 0; i < inputCount; i++)
	{
		totalX += pow(input[i].x[0] - meanX, 2);
		totalY += pow(input[i].x[1] - meanY, 2);
	}

	varianceX = totalX / inputCount;
	varianceY = totalY / inputCount;

	//Assign new normalized locations.
	for (int i = 0; i < inputCount; i++)
	{
		//scale * x + shift
		input[i].x[0] = (input[i].x[0] - meanX) / sqrt(varianceX);
		input[i].x[1] = (input[i].x[1] - meanY) / sqrt(varianceY);
	}
}

int NeuralNetwork::sgn(int number)
{
	return number >= 0 ? 1 : -1;
}

double NeuralNetwork::sigmoid(double net, double delta) 
{
	double temp1 = exp(-delta * net);

	double returnValue = (2 / (1 + temp1)) - 1;
	//return std::isfinite(returnValue) ? returnValue : this->sgn(returnValue);
	if (isfinite(returnValue))
		return returnValue;
	else
		return returnValue >= 0 ? 1 : -1;
}

double NeuralNetwork::derivatedSigmoid(double output, int desiredValue)
{
	return 0.5 * (1 - output*output);
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




void NeuralNetwork::MatrixMultiplication(double* m1, int col1, int row1, double* m2, int col2, int row2, double* m3)
{
	if (col1 != row2)
		return;

	double sum = 0;
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			sum = 0;
			for (int k = 0; k < col1; k++) {
				sum += m1[i * col1 + k] * m2[k * col2 + j];
			}
			m3[i * col2 + j] = sum;
		}
	}

}

void NeuralNetwork::MatrixMultiplication(double* matx, int col, int row, double scalerNumber, double* matx2)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			matx2[i * col + j] = scalerNumber * matx[i * col + j];
}
