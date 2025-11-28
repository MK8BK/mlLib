#include "linreg.h"

namespace mlLib {

OneDimensionalLinearRegression::OneDimensionalLinearRegression(): a{}, b{}{}

OneDimensionalLinearRegression::OneDimensionalLinearRegression(std::vector<std::pair<double, double>>& scatterPlot):a{}, b{}{
  submit(scatterPlot);
}

void OneDimensionalLinearRegression::submit(std::vector<std::pair<double, double>>& scatterPlot){
  calculate(scatterPlot);
}

std::pair<double, double> OneDimensionalLinearRegression::getCoefficients(){
  return {a, b};
}

void OneDimensionalLinearRegression::calculate(std::vector<std::pair<double, double>>& scatterPlot){
  double xbar{}, ybar{};
  std::size_t n{scatterPlot.size()};
  for(auto[x,y] : scatterPlot){
    xbar += x;
    ybar += y;
  }
  xbar /= n;
  ybar /= n;
  double numerator{}, denominator{};
  for(auto[x,y] : scatterPlot){
    numerator += (x-xbar)*(y-ybar);
    denominator += (x-xbar)*(x-xbar);
  }
  a = numerator/denominator;
  b = ybar - a*xbar;
}

}