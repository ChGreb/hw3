#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
//--------------------------------------------------
// Homework3	Statisitcs
// Christian Greb	2030036
//--------------------------------------------------

void RandNum(double* x, int N){
  for(int i=0; i<N; i++)
    x[i] = rand()/double(RAND_MAX);
}

void stat(double* p, double& mean, double& var, int N){
  
  mean = 0;
    for(int i=0; i<N; i++)	//Sum all random values and calc the mean value
      mean += p[i]/N;
    
  var = 0;
    for(int i=0; i<N; i++)	//Sum over all "displacements" and calc the variance
      var = ((p[i]-mean)*(p[i]-mean))/N;
}


int main(){
   const int N = 100;
   double p[N];
   double mean, var;

  RandNum(p, N);
  stat(p, mean, var, N);
   
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
