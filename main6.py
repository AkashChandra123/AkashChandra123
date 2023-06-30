import numpy as np
a = np.array([[1,2,3],[4,5,6]])
print(a)

b = np.array([[3,2],[4,7],[8,9]])
print(b)
c = np.matmul(a,b)
print(c)
print(np.linalg.det(c))
