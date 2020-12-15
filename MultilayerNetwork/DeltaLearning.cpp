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

double DeltaLearning::FeedForward(Samples* input, int inputCount, int hiddenNeuronNumber, SampleClass* cls, int classCount, int numberOfClass, int d)
{
    MatrixMultiplication(input[inputCount].x, 3, 1, this->v, hiddenNeuronNumber, 3, this->y, "sigmoid");
    this->y[hiddenNeuronNumber + 1] = BIAS;
    
    MatrixMultiplication(this->y, (hiddenNeuronNumber + 1), 1, cls[classCount].w, numberOfClass, (hiddenNeuronNumber + 1), this->o, "sigmoid");

    double error = 0.5 * (d - this->o[classCount]) * (d - o[classCount]);
    return error;
}

void DeltaLearning::BackPropagation(Samples* input, int inputCount, SampleClass* cls, int classCount, int numberOfClass, int d, int hiddenNeuronNumber)
{
    double sum = 0.0, D_yj;
    double D_ok = 0.5 * (1 - (o[classCount] * o[classCount])) * (d - o[classCount]);
    for (int j = 0; j < hiddenNeuronNumber; j++) {
        D_yj = 0.5 * (1 - y[j] * y[j]) * sum;
        sum = 0.0;
        for (int k = 0; k < numberOfClass; k++) {
            sum += D_ok * cls[classCount].w[j * numberOfClass + k];//w : hidden x class ?? will check
        }
    }

    for (int j = 0; j < hiddenNeuronNumber; j++) {
        for (int k = 0; k < numberOfClass; k++) {
            cls[classCount].w[j * numberOfClass + k] += getC() * D_ok * y[j];
        }
    }

    for (int j = 0; j < hiddenNeuronNumber; j++)
        for (int i = 0; i < 3; i++)
            v[j * 3 + i] += getC() * D_yj * input[inputCount].x[i];


}



void DeltaLearning::Train(Samples* input, double* w, int inputCount, SampleClass* cls, int numberOfClass, int& jeneration)
{
    bool isUpdated;
    int d;
    double net, temp, output, derivatedOutput, epoch, error, errorMax = 0.9;
    //
    ////For each class weights
    //for (int clsNumber = 0; clsNumber < numberOfClass; clsNumber++)
    //{
    //    // until network give not error for all samples
    //    do
    //    {
    //        isUpdated = false;
    //        for (int i = 0; i < inputCount; i++)
    //        {
    //            //expected value
    //            cls[clsNumber].classId == input[i].classId ? d = 1 : d = -1;

    //            //w^t * x   
    //            net = cls[clsNumber].w[0] * input[i].x1 + cls[clsNumber].w[1] * input[i].x2 + cls[clsNumber].w[2] * BIAS;

    //            //activation functions
    //            output = this->sigmoid(net, this->getDelta());
    //            derivatedOutput = this->derivatedSigmoid(output, d);

    //            error = 0.5 * pow(d - output, 2);
    //            if (error > 0.1) {
    //                //w^n+1 = w^n + c * ( d - sgn(net) ) * x
    //                temp = 0.5 * this->getC() * (d - output) * derivatedOutput;
    //                cls[clsNumber].w[0] += temp * input[i].x1;
    //                cls[clsNumber].w[1] += temp * input[i].x2;
    //                cls[clsNumber].w[2] += temp * BIAS;

    //                isUpdated = true;
    //            }
    //        }
    //        ++jeneration;


    //    } while (isUpdated);
    //}


    ////For each class weights
    //for (int clsNumber = 0; clsNumber < numberOfClass; clsNumber++)
    //{
    //    // until network give not error for all samples
    //    do
    //    {
    //        error = 0.0;
    //        for (int i = 0; i < inputCount; i++)
    //        {
    //            //expected value
    //            cls[clsNumber].classId == input[i].classId ? d = 1 : d = -1;

    //            //w^t * x   
    //            net = cls[clsNumber].w[0] * input[i].x1 + cls[clsNumber].w[1] * input[i].x2 + cls[clsNumber].w[2] * BIAS;

    //            //activation functions
    //            output = this->sigmoid(net, this->getDelta());
    //            derivatedOutput = this->derivatedSigmoid(output, d);

    //            //w^n+1 = w^n + c * ( d - sgn(net) ) * x
    //            temp = 0.5 * this->getC() * (d - output) * derivatedOutput;
    //            cls[clsNumber].w[0] += temp * input[i].x1;
    //            cls[clsNumber].w[1] += temp * input[i].x2;
    //            cls[clsNumber].w[2] += temp * BIAS;

    //            error += 0.5 * pow(d - output, 2);
    //        }
    //        ++jeneration;


    //    } while (error > errorMax);
    //}
}
