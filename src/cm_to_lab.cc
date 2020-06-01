//
// Created by mikhail on 6/1/20.
//
#include <iostream>
#include <math.h>

int main(int n_args, char** args) {
  if( n_args != 2) {
	std::cout << "Error: lack of arguments. 1 argument required" << std::endl;
	return 1;
  }
  const double M = 0.938;
  double sqrt_s = std::atof(args[1]);
  double T = sqrt_s*sqrt_s/ 2 / M - 2*M;
  const double GAMMA = (T + M) / M;
  const double BETA = sqrt(1 - (M * M) / (M + T) / (M + T));
  const double PZ = M * BETA * GAMMA;
  const double E = T + M;
  const double Y_BEAM = 0.5 * log((E + PZ) / (E - PZ));
  const double GAMMA_CMS = sqrt_s/2/M;
  std::cout << "T\t\t\tsqrt(S)\t\ty_beam/2\t\tp_cms\t\tgamma_beam" << std::endl;
  std::cout << T << "\t\t" << sqrt_s << "\t\t" << Y_BEAM/2 << "\t\t" << E*BETA << "\t\t" << GAMMA_CMS << std::endl;
  std::cout << "AGeV\t\tGeV\t\t\t\t\t\t\tGeV/c" << std::endl;
  return 0;
}