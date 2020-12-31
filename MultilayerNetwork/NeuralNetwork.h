#pragma once
#include "Resources.h"

class NeuralNetwork
{
protected:
	int* input;
	int* output;
	int layerCount;
	int neuronCount;
	double c; //learning constant

public:
	double* v;		//hiddenNeuronNumber * (2 + 1)
	int* v_color;	//hiddenNeuronNumber * 3(RGB)
	double* y;		//(hiddenNeuronNumber + 1) * 1
	double* w;		//(hiddenNeuronNumber + 1) * classNumber
	double* o;		//classNumber * 1
	int* d;			//classNumber * 1
		
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

	virtual void Train(Samples* input, double* output, int inputCount, SampleClass* cls, int numberOfClass, int& jeneration) = 0;

	void batchNormalizing(Samples* input, int inputCount);

	//Activation functions
	int sgn(int number);
	double sigmoid(double net, double delta);
	double derivatedSigmoid(double output);
	double logistic(double net);
	double tanH(double net);		// Hyperbolic Tangent
	double reLU(double net);		// Rectified Linear Unit
	double leakyReLU(double net);
	double softmax(double net);

	void MatrixMultiplication(double* m1, int col1, int row1, double* m2, int col2, int row2, double* m3);
	void MatrixMultiplication(double* m1, int col1, int row1, double* m2, int col2, int row2, double* m3, char* activationFunc, float lambda);
	void MatrixMultiplication(double* matx, int col, int row, double scalerNumber, double* matx2);
	void transpose(double* matx, int row, int col);
};

