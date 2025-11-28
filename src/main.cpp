#include <iostream>
#include <fstream>
#include "linreg.h"

int main(){
  std::cout << "MLLib mein fuhrer." << std::endl;

  std::vector<std::pair<double, double>> data {{0,0},{1,1},{2,2}};
  mlLib::OneDimensionalLinearRegression lr(data);
  auto [a,b] = lr.getCoefficients();
  std::cout << "a=" << a << ", b=" << b << std::endl;

  data.clear();
  std::ifstream fichier("test_data.txt", std::ios::in);
  if(!fichier.is_open()){
    std::cout << "bozo" << std::endl;
    return 0;
  }
  double x, y;
  while(fichier >> x >> y)
    data.push_back({x,y});
  lr.submit(data);
  auto [c, d] = lr.getCoefficients();
  a = c, b=d;
  std::cout << "a=" << a << ", b=" << b << std::endl;

  return 0;
}