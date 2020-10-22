#include "SingleLayerNetwork.h"


SingleLayerNetwork::SingleLayerNetwork()
{
    this->neuronCount = 1;
    this->layerCount = 1;
    this->c = 0.1;
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

double* SingleLayerNetwork::Train(Samples* input, double* output, int inputCount, int &jeneration)
{
    int d = 0; //expected value
    double net = 0.1;

    //semantic error
    while (d != net) {
        for (int i = 0; i < inputCount; i++)
        {
            d = input[i].id;

            net = sgn(calculateNet(output, input[i]));
            if (d != net)
                output = calculateNewWeight(output, getC(), d, net, input[i]);
            ++jeneration;
        }
    }
    return output;
}

int SingleLayerNetwork::sgn(int number)
{
    return number >= 0 ? 1 : -1;
}

double SingleLayerNetwork::calculateNet(double* w, Samples x)
{
    //return w.w1 * x.x1 + w.w2 * x.x2 + w.w3;
    return w[0] * x.x1 + w[1] * x.x2 + w[2];
}

double* SingleLayerNetwork::calculateNewWeight(double* w, double c, int d, int net, Samples x)
{
    double temp = c * (d - net);
    w[0] += x.x1 * temp;
    w[1] += x.x2 * temp;

    return w;
}
