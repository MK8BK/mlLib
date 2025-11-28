#ifndef LINEREG_H
#define LINEREG_H
#include <vector>

namespace mlLib {
  class OneDimensionalLinearRegression{
    public:
      OneDimensionalLinearRegression();
      OneDimensionalLinearRegression(std::vector<std::pair<double, double>>& scatterPlot);
      void submit(std::vector<std::pair<double, double>>& scatterPlot);
      std::pair<double, double> getCoefficients();
    private:
      void calculate(std::vector<std::pair<double, double>>& scatterPlot);
      double a, b;
  };
}


#endif