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
    int d, output;
    double net, temp, error;

    //For each class weights
    for (int clsNumber = 0; clsNumber < numberOfClasses; clsNumber++)
    {
        do
        {
            error = 0;
            // until network give not error for all samples
            for (int i = 0; i < numberOfInputs; i++)
            {
                //expected value
                cls[clsNumber].classId == input[i].classId ? d = 1 : d = -1;

                //w^t * x   
                net = cls[clsNumber].w[0] * input[i].x[0] + cls[clsNumber].w[1] * input[i].x[1] + cls[clsNumber].w[2] * input[i].x[2];

                output = sgn(net);   //activation function
                if (d != output) {
                    
                    //w^n+1 = w^n + c * ( d - sgn(net) ) * x
                    temp = 0.5*this->getC() * (d - output);
                    cls[clsNumber].w[0] = cls[clsNumber].w[0] + temp * input[i].x[0];
                    cls[clsNumber].w[1] = cls[clsNumber].w[1] + temp * input[i].x[1];
                    cls[clsNumber].w[2] = cls[clsNumber].w[2] + temp * input[i].x[2];

                    error += 0.5 * (d - output) * (d - output);
                }
            }
            ++cycleCount;
        } while (error > 0.05);
    }
}

