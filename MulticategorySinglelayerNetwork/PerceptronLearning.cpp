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

void PerceptronLearning::Train(Samples* input, double* w, int numberOfInputs, SampleClass* cls, int numberOfClasses, int &cycleCount)
{
    bool isUpdated;
    int d, signedNet;
    double net, temp;

    //For each class weights
    for (int clsNumber = 0; clsNumber < numberOfClasses; clsNumber++)
    {
        // until network give not error for all samples
        do
        {
            isUpdated = false;
            for (int i = 0; i < numberOfInputs; i++)
            {
                //expected value
                cls[clsNumber].classId == input[i].classId ? d = 1 : d = -1;

                //w^t * x   
                net = cls[clsNumber].w[0] * input[i].x1 + cls[clsNumber].w[1] * input[i].x2 + cls[clsNumber].w[2] * BIAS;

                signedNet = sgn(net);   //activation function
                if (d != signedNet) {

                    //w^n+1 = w^n + c * ( d - sgn(net) ) * x
                    temp = this->getC() * (d - signedNet);
                    cls[clsNumber].w[0] += temp * input[i].x1;
                    cls[clsNumber].w[1] += temp * input[i].x2;
                    cls[clsNumber].w[2] += temp * BIAS;

                    isUpdated = true;
                }
            }
                ++cycleCount;
        } while (isUpdated);
    }
}

