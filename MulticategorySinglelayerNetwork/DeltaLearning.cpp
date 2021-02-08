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

void DeltaLearning::Train(Samples* input, double* w, int inputCount, SampleClass* cls, int numberOfClass, int& epoch, double &loss)
{
    int d;
    double net, temp, output, derivatedOutput;

    //For each class weights
    for (int clsNumber = 0; clsNumber < numberOfClass; clsNumber++)
    {
        // until network give not error for all samples
        do
        {
            loss = 0.0;
            for (int i = 0; i < inputCount; i++)
            {
                //expected value
                cls[clsNumber].classId == input[i].classId ? d = 1 : d = -1;

                //w^t * x   
                net = cls[clsNumber].w[0] * input[i].x1 + cls[clsNumber].w[1] * input[i].x2 + cls[clsNumber].w[2] * BIAS;

                //activation functions
                output = this->sigmoid(net, this->getDelta());
                derivatedOutput = this->derivatedSigmoid(output, d);

                //w^n+1 = w^n + c * ( d - sgn(net) ) * x
                temp = 0.5 * this->getC() * (d - output) * derivatedOutput;
                cls[clsNumber].w[0] += temp * input[i].x1;
                cls[clsNumber].w[1] += temp * input[i].x2;
                cls[clsNumber].w[2] += temp * BIAS;

                loss += 0.5 * pow(d - output, 2);
            }
            ++epoch;
        } while (loss > 0.01);
    }
}
