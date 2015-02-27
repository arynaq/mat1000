#include </home/arynaq/HioA/DigsysII/lib/lib.h>
#include <stdio.h>
#include <math.h>


int main(int argc, char** argv){

  double rootFunc1, rootFunc2, rootFunc3, rootFunc4 = 0;

  //First function defined over [-2,2]
  rootFunc1 = bisectionMethod(-2,2,20, [](double x){return 2*sin(x) - x;});

  //Second function defined over [0,inf)
  rootFunc2 = bisectionMethod(0,100,20, [](double x){
      return pow(2,x) -pow(x,3);});
						     

  //Third function defined over [0,inf)
  rootFunc3 = bisectionMethod(0,100,20,[](double x){return log(x) - x/4;});

  //Fourth function defined over (1,2)
  rootFunc4 = bisectionMethod(0,100,20,[](double x){return pow(x,5) -3*x -1;});


  printf("\nFirst function, root: %lf", rootFunc1);
  printf("\nSecond function, root: %lf", rootFunc2);
  printf("\nThird function, root: %lf", rootFunc3);
  printf("\nFourth function, root: %lf\n", rootFunc4);
}


