from random import gauss 
import matplotlib.pyplot as plt

a = 2.5
b = -3
X = [x/10.0 for x in range(-100,100)]
Y = [a*x+b+gauss(mu=0, sigma=1) for x in X]
scatterPlot = list(zip(X,Y))
# plt.scatter(X, Y, color="blue")
# plt.plot(X, [a*x+b for x in X], color="red")
# plt.show()
for i in range(len(X)):
  print(X[i], Y[i])