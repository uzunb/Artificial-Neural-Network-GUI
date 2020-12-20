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

double DeltaLearning::FeedForward(double* x, int hiddenNeuronNumber, int classCount, int numberOfClass, int d)
{
    MatrixMultiplication(x, 3, 1, this->v, hiddenNeuronNumber, 3, this->y, "sigmoid");
    this->y[hiddenNeuronNumber + 1] = BIAS;
    
    MatrixMultiplication(this->y, (hiddenNeuronNumber + 1), 1, this->w, numberOfClass, (hiddenNeuronNumber + 1), this->o, "sigmoid");

    double error = 0.0;
    for (int k = 0; k < numberOfClass; k++)
       error += 0.5 * (d - this->o[k]) * (d - o[k]);
    return error;
}

void DeltaLearning::BackPropagation(double* x, int hiddenNeuronNumber, int numberOfClass, int d, double* Do, double* Dy)
{
    double sum = 0.0;

    //error signals of the output layer 
    for (int k = 0; k < numberOfClass; k++)
        Do[k] = 0.5 * (d - o[k]) * (1 - (o[k] * o[k]));

    //error signals of the hidden layer 
    for (int j = 0; j < hiddenNeuronNumber; j++) {
        for (int k = 0; k < numberOfClass; k++) {
            sum += Do[k] * w[j * numberOfClass + k];//w : hidden x class ?? will check
        }
        Dy[j] = 0.5 * (1 - y[j] * y[j]) * sum;
        sum = 0.0;
    }

    //Output layer weights are adjusted
    for (int j = 0; j < hiddenNeuronNumber; j++) {
        for (int k = 0; k < numberOfClass; k++) {
            w[j * numberOfClass + k] += getC() * Do[k] * y[j];
        }
    }

    //Hidden layer weights are adjusted
    for (int j = 0; j < hiddenNeuronNumber; j++)
        for (int i = 0; i < 3; i++)//dimension + 1
            v[j * 3 + i] += getC() * Dy[j] * x[i];
}



void DeltaLearning::Train(Samples* input, double* w, int inputCount, SampleClass* cls, int numberOfClass, int& jeneration)
{
    //FeedForward(input, inputCount, )


}
