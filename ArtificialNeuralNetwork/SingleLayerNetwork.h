#include "Resources.h"

#define DIMENSION 2
#define BIAS -1

class SingleLayerNetwork
{
private:
	int* input;
	int* output;
	int layerCount;
	int neuronCount;
	double c; //learning constant

public:
	SingleLayerNetwork();
	~SingleLayerNetwork();

	void setLayerCount(int count);
	void setNeuronCount(int count);
	void setInput(int* input);
	void setOutput(int* output);
	void setC(double c);
	int  getLayerCount();
	int  getNeuronCount();
	int* getInput();
	int* getOutput();
	double getC();



	double* Train(Samples* input, double* output, int inputCount, int &jeneration);
	int sgn(int number);
};

