from z3 import *

s = Solver()
x = Int('x')
y = Int('y')

s.add(x <= 99, x > 9, y <= 99, y > 9, x <= y, x*y == 3431)

print (s.check())
f = s.model()

print ("x =",f[x])
print ("y =",f[y])
