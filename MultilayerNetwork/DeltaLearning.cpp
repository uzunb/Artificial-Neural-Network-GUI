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

    double error = 0.5 * (d - this->o[classCount]) * (d - o[classCount]);
    return error;
}

void DeltaLearning::BackPropagation(double* x, int hiddenNeuronNumber, int classCount, int numberOfClass, int d)
{
    double sum = 0.0, D_yj;
    double D_ok = 0.5 * (1 - (o[classCount] * o[classCount])) * (d - o[classCount]);
    for (int j = 0; j < hiddenNeuronNumber; j++) {
        D_yj = 0.5 * (1 - y[j] * y[j]) * sum;
        sum = 0.0;
        for (int k = 0; k < numberOfClass; k++) {
            sum += D_ok * w[j * numberOfClass + k];//w : hidden x class ?? will check
        }
    }

    for (int j = 0; j < hiddenNeuronNumber; j++) {
        for (int k = 0; k < numberOfClass; k++) {
            w[j * numberOfClass + k] += getC() * D_ok * y[j];
        }
    }

    for (int j = 0; j < hiddenNeuronNumber; j++)
        for (int i = 0; i < 3; i++)//dimension + 1
            v[j * 3 + i] += getC() * D_yj * x[i];


}



void DeltaLearning::Train(Samples* input, double* w, int inputCount, SampleClass* cls, int numberOfClass, int& jeneration)
{
    //FeedForward(input, inputCount, )


}
