#pragma once
#include "DeltaLearning.h"


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

double DeltaLearning::FeedForward(double* x, int hiddenNeuronNumber, int numberOfClass, int* d)
{
    //MatrixMultiplication(x, 3, 1, this->v, hiddenNeuronNumber+1, 3, this->y, "sigmoid");
    this->y[hiddenNeuronNumber] = BIAS;
    
    //MatrixMultiplication(this->y, (hiddenNeuronNumber + 1), 1, this->w, numberOfClass, (hiddenNeuronNumber + 1), this->o, "sigmoid");

    double error = 0.0;
    for (int k = 0; k < numberOfClass; k++)
       error += 0.5 * (d[k] - o[k]) * (d[k] - o[k]);
    return error;
}

void DeltaLearning::BackPropagation(double* x, int hiddenNeuronNumber, int numberOfClass, int* d, double* Do, double* Dy)
{
    //error signals of the output layer 
    for (int k = 0; k < numberOfClass; k++)
        Do[k] = (d[k] - o[k]) * (1 - o[k])* o[k];

    //error signals of the hidden layer 
    double sum;
    for (int j = 0; j < hiddenNeuronNumber; j++) {
        sum = 0.0;
        for (int k = 0; k < numberOfClass; k++)
            sum += Do[k] * w[k * hiddenNeuronNumber + j];//w : hidden x class ?? will check
        Dy[j] = y[j] * (1 - y[j]) * sum;
    }

    //Output layer weights are adjusted
    for (int k = 0; k < numberOfClass; k++)
        for (int j = 0; j < hiddenNeuronNumber; j++) 
            w[k * hiddenNeuronNumber + j] += getC() * Do[k] * y[j];

    //Hidden layer weights are adjusted
    for (int j = 0; j < hiddenNeuronNumber; j++)
        for (int i = 0; i < 3; i++)//dimension + 1
            v[j * 3 + i] += getC() * Dy[j] * x[i];
}



void DeltaLearning::Train(Samples* input, double* w, int inputCount, SampleClass* cls, int numberOfClass, int& jeneration)
{
    //FeedForward(input, inputCount, )


}
