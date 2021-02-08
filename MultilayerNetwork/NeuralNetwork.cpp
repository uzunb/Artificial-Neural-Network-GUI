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

/*Activation functions */

int NeuralNetwork::sgn(int number)
{
	return number >= 0 ? 1 : -1;
}

double NeuralNetwork::sigmoid(double net, double lambda = 1	) 
{
	double returnValue = (2 / (1 + exp(-lambda * net)) - 1);

	if (isfinite(returnValue))	return  returnValue;
	else                        return	returnValue >= 0 ? 1 : -1;
}

double NeuralNetwork::derivatedSigmoid(double output)
{
	double returnValue = 0.5 * (1 - output * output);

	if (isfinite(returnValue)) {
		if (returnValue >= 1)  returnValue = 1;
		else if (returnValue <= -1) returnValue = -1;
		return returnValue;
	}
	else
		return	returnValue >= 0 ? 1 : -1;
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

void NeuralNetwork::softmax(double* output, int classNumber)
{
	double sum = 0;
	for (int i = 0; i < classNumber; i++)
		sum += exp(output[i]);
	
	for (int i = 0; i < classNumber; i++)
		output[i] = exp(output[i]) / sum;
}




void NeuralNetwork::MatrixMultiplication(double* m1, int row1, int col1, double* m2, int row2, int col2, double* m3)
{
	if (col1 != row2)
		exit(1);

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


void NeuralNetwork::MatrixMultiplication(double* m1, int row1, int col1, double* m2, int row2, int col2, double* m3, char* activationFunc, float lambda)
{
	if (col1 != row2)		exit(1);

	double sum = 0;
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			sum = 0;
			for (int k = 0; k < col1; k++) {
				sum += m1[i * col1 + k] * m2[k * col2 + j];
			}
			if (!strcmp(activationFunc, "sigmoid"))
				m3[i * col2 + j] = sigmoid(sum, lambda);
			else if (!strcmp(activationFunc, "dsigmoid"))
				m3[i * col2 + j] = derivatedSigmoid(sum);
			else if (!strcmp(activationFunc, "relu"))
				m3[i * col2 + j] = reLU(sum);
			else if (!strcmp(activationFunc, "sign"))
				m3[i * col2 + j] = sgn(sum);
			else
				exit(1);

		}
	}

}

void NeuralNetwork::MatrixMultiplication(double* matx, int col, int row, double scalerNumber, double* matx2)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			matx2[i * col + j] = scalerNumber * matx[i * col + j];
}

void NeuralNetwork::transpose(double* matx, int row, int col)
{
	double* temp = new double[row * col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			temp[j * row + i] = matx[i * col + j];

	matx = temp;
	delete[] temp;
}

//float NeuralNetwork::dynamicLearningRate(double* w, int row, int col, Samples* p)
//{
//	float c;
//	//transpose(w, row, col);
//	//MatrixMultiplication(w, col, row, p->x, 3, 1, )
//	return c;
//}
