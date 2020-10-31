#include <math.h> 
#include "NeuralNetwork.h"

#define BIAS -1

class DeltaLearning : public NeuralNetwork
{
private:
	double eta;
	double delta = 1;

public:
	DeltaLearning();
	~DeltaLearning();

	void setEta(double muValue);
	void setDelta(double deltaValue);
	double getEta();
	double getDelta();

	void Train(Samples* input, double* output, int inputCount, int& jeneration);
};

