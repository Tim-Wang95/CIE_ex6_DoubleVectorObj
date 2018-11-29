#include <iostream>


namespace cie {
	class DoubleVector {
	public:
		int s;
		DoubleVector(int n);
		~DoubleVector();
		double& at(int i);
		int size();
		void resize(int ns);
		void push_back(double v);


	private:
		int size_; int len; int new_size;
		double* vec; double* temp;
	};

	void print(DoubleVector& v);
	void userInput(DoubleVector& v);
	double dotProduct(DoubleVector& v1, DoubleVector& v2);

}


