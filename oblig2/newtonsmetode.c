#include <lib.h>
#include <iostream>
#include <math.h>
#include <stdexcept>

using namespace std;

int main(int argc, char** argv){
	double rootFunc1, rootFunc2, rootFunc3, rootFunc4 = 0;
	
	auto f1 = [](double x){return x*x - x -1;};
	auto df1 = [](double x){return 2*x -1;};

	auto f2 = [](double x){return sqrt(x+1) + pow(x,1.0/3) -2;};
	auto df2 = [](double x){return 1.0/(2*sqrt(x+1)) + 1.0/(3*pow(x,2.0/3));};

	auto f3 = [](double x){return atan(x)-x-1;};
	auto df3 = [](double x){return 1.0/(1+x*x) -1;};

	auto f4 = [](double x){return x*x*x +2*x -2;};
	auto df4 = [](double x){return 3*x*x + 2;};


	try{
		rootFunc1 = newtonsMethod(1,2,1.5,20, f1, df1);
	}catch(std::overflow_error o){
		rootFunc2 = bisectionMethod(1,2,20,f1);
	}

	try{
		rootFunc2 = newtonsMethod(0,100,50,20, f2, df2);
	}catch(std::overflow_error o){
		rootFunc2 = bisectionMethod(0,100,20,f2);
	}

	try{
		rootFunc3 = newtonsMethod(0,1000,500,20,f3, df3);
	}catch(std::overflow_error o){
		rootFunc3 = bisectionMethod(0,1000,20,f3);
	}

	try{
		rootFunc4 = newtonsMethod(0,1000,500,20,f4, df4);
	}
	catch(std::overflow_error o){
		rootFunc4 = bisectionMethod(0,1000,20,f4);
	}
	
	
	cout<<"Func1 root: "
		<<rootFunc1
		<<endl;

	cout<<"Func2 root: "
		<<rootFunc2
		<<endl;

	cout<<"Func3 root:"
		<<rootFunc3
		<<endl;

	cout<<"Func4 root:"
		<<rootFunc4
		<<endl;
		
	return 0;
}