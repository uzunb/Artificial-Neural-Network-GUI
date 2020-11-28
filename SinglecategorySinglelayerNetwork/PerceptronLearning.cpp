#include "PerceptronLearning.h"


PerceptronLearning::PerceptronLearning()
{
    this->setNeuronCount(1);
    this->setLayerCount(1);
    this->setC(0.5);
}

PerceptronLearning::~PerceptronLearning()
{
    
}

void PerceptronLearning::Train(Samples* input, double* w, int inputCount, int &cycleCount)
{
    bool isUpdated;
    int d, signedNet;
    double net, temp;

    // until network give not error for all samples
    do
    {
        isUpdated = false;
        for (int i = 0; i < inputCount; i++)
        {
            //expected value
            d = input[i].classId;

            //w^t * x   
            net = w[0] * input[i].x1 + w[1] * input[i].x2 + w[2] * BIAS;

            signedNet = sgn(net);   //activation function
            if (d != signedNet) {

                //w^n+1 = w^n + c * ( d - sgn(net) ) * x
                temp = this->getC() * (d - signedNet);
                w[0] = w[0] + temp * input[i].x1;
                w[1] = w[1] + temp * input[i].x2;
                w[2] = w[2] + temp * BIAS;

                isUpdated = true;
            }
        }
            ++cycleCount;
    } while (isUpdated);
}

