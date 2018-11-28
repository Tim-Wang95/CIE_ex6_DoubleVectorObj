#include "DoubleVector.hpp"


namespace cie {

	DoubleVector::DoubleVector(int n):
		size_(n), vec(new double[size_]) {
		for (int i = 0; i < n; i++) { vec[i] = 0; }
	}

	double& DoubleVector::at(int i) {
		double& Re = vec[i]; return Re;
	}

	int DoubleVector::size() {
		s = _msize(vec) / sizeof(vec[0]);
		return s;
	}

	void DoubleVector::resize(int ns) {
		len = _msize(vec) / sizeof(vec[0]); new_size = ns;
		if (new_size != len) {
			temp = new double[len]; for (int i = 0; i < len; i++) { temp[i] = vec[i]; }
			vec = new double[new_size];

			if (new_size > len) {
				for (int i = 0; i < len; i++) { vec[i] = temp[i]; }
				for (int i = len; i < new_size; i++) { vec[i] = 0; }
			}
			else if (new_size < len) {
				for (int i = 0; i < new_size; i++) { vec[i] = temp[i]; }
			}
		}
	}

	void DoubleVector::push_back(double v) {
		len = _msize(vec) / sizeof(vec[0]);
		temp = new double[len]; for (int i = 0; i < len; i++) { temp[i] = vec[i]; }
		vec = new double[len+1];
		for (int i = 0; i < len; i++) { vec[i] = temp[i]; }
		vec[len] = v;
	}

	DoubleVector::~DoubleVector() {
		delete[] vec;
	}

	void print(DoubleVector& v) {
		int length = v.size();
		std::cout << "[ ";
		for (int i = 0; i < length; i++) {
			std::cout << v.at(i) << " ";
		}
		std::cout << "]" << std::endl;
	}
	void userInput(DoubleVector& v) {
		int length = v.size(); double* t = new double[length];
		std::cout << "Input the values of the double vector [" << length << "]: ";
		for (int i = 0; i < length; i++) {
			std::cin >> t[i]; v.at(i) = t[i];
		}
		std::cout << std::endl;
	}
	double dotProduct(DoubleVector& v1, DoubleVector& v2) {
		double sum = 0;
		for (int i = 0; i < v1.size(); i++) {
			sum += v1.at(i) * v2.at(i);
		}
		return sum;
	}
}


