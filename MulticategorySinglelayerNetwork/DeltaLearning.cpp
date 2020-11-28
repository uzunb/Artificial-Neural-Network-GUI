#pragma once
#include "DeltaLearning.h"


DeltaLearning::DeltaLearning()
{
	this->setLayerCount(1);
	this->setNeuronCount(1);
	this->setC(0.1);
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

void DeltaLearning::Train(Samples* input, double* w, int inputCount, SampleClass* cls, int numberOfClass, int& jeneration)
{
    bool isUpdated;
    int d;
    double net, temp, output, derivatedOutput, epoch, error;

    // until network give not error for all samples
    do
    {
        epoch = 0.0;
        isUpdated = false;
        for (int i = 0; i < inputCount; i++)
        {
            //expected value
            d = input[i].classId;

            //w^t * x   
            net = w[0] * input[i].x1 + w[1] * input[i].x2 + w[2] * BIAS;
     
            //activation functions
            output = this->sigmoid(net, this->getDelta());   
            derivatedOutput = this->derivatedSigmoid(output, d);

            error = 0.5* pow(d - output, 2);
            epoch += error;
            if (epoch > 0.2) {

                //w^n+1 = w^n + c * ( d - sgn(net) ) * x
                temp = this->getC() * error * derivatedOutput;
                w[0] += temp * input[i].x1;
                w[1] += temp * input[i].x2;
                w[2] += temp * BIAS;

                isUpdated = true;
            }
        }
        ++jeneration;
    } while (isUpdated);
}
