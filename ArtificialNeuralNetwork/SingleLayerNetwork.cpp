#include "SingleLayerNetwork.h"


SingleLayerNetwork::SingleLayerNetwork()
{
    this->neuronCount = 1;
    this->layerCount = 1;
    this->c = 0.5;
}

SingleLayerNetwork::~SingleLayerNetwork()
{
   
}

void SingleLayerNetwork::setLayerCount(int count)
{
    this->layerCount = count;
}

void SingleLayerNetwork::setNeuronCount(int count)
{
    this->neuronCount = count;
}

void SingleLayerNetwork::setInput(int* input)
{
    this->input = input;
}

void SingleLayerNetwork::setOutput(int* output)
{
    this->output = output;
}

void SingleLayerNetwork::setC(double c)
{
    this->c = c;
}

int SingleLayerNetwork::getLayerCount()
{
    return this->layerCount;
}

int SingleLayerNetwork::getNeuronCount()
{
    return this->neuronCount;
}

int* SingleLayerNetwork::getInput()
{
    return this->input;
}

int* SingleLayerNetwork::getOutput()
{
    return this->output;
}

double SingleLayerNetwork::getC()
{
    return this->c;
}

double* SingleLayerNetwork::Train(Samples* input, double* w, int inputCount, int &cycleCount)
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

            signedNet = sgn(net);
            if (d != signedNet) {

                //w^n+1 = w^n + c * ( d - sgn(net) ) * x
                temp = c * (d - signedNet);
                w[0] = w[0] + temp * input[i].x1;
                w[1] = w[1] + temp * input[i].x2;
                w[2] = w[2] + temp * BIAS;

                isUpdated = true;
            }
        }
            ++cycleCount;
    } while (isUpdated);
    return w;
}

int SingleLayerNetwork::sgn(int number)
{
    return number >= 0 ? 1 : -1;
}