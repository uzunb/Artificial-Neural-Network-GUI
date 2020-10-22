#include "Resources.h"

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
	double calculateNet(double* w, Samples x);
	double* calculateNewWeight(double* w, double c, int d, int net, Samples x);
};

