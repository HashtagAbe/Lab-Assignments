#include <iostream>
#include <string>
#include <array>
#include <math.h>
#include <cassert>

using namespace std;

class StdDeviation{
	private:
		//int size;
		int size = 10;
		double mean;
		double data[10];
	public:
		double fillArray();
		double getMean();
		double getSampleVariance();
		double getStdDeviation();

};

int main(){
	StdDeviation test;
	test.fillArray();
	cout << "The mean is: " << test.getMean() << endl;
	cout << "The sample variance is: " << test.getSampleVariance() << endl;
	cout << "The standard deviation is: " << test.getStdDeviation() << endl;
	
}


double StdDeviation::fillArray(){
	for (int i = 0; i < size; i++)
		{
			double x;			
			cout << "Enter data: ";
			cin >> x;
			assert( x != '\0' ); 
			data[i] = x;
			
		}
}

double StdDeviation::getMean(){
	double sum = 0;
	for (int i = 0; i < size; i++){
		sum += data[i];
	}
	return (sum / size);
}

double StdDeviation::getSampleVariance(){
	mean = getMean();
	double temp = 0;
	for ( int i = 0; i < size; i++){
		temp += ((data[i] - mean)* (data[i] - mean));
	}
	return temp / (size - 1);
}

double StdDeviation::getStdDeviation(){
	return sqrt(getSampleVariance());
}
