# -*- coding: utf-8 -*-
"""
Created on Tue Jan 07 13:50:01 2024

@author: Zhalgas Zhiyenbekov
"""

import matplotlib.pyplot as plt
import numpy as np
%matplotlib qt

def f(x):
    
    return x**2 - 5*x + 5
    
    
def df(x):
    
    return 2*x - 5
    
n = 50
x0 = 0.2
l = 0.8

#x_plt = np.arange(0, 5.0, 0.1)
x_plt = np.arange(0, 5.0, 0.1)

f_plt = [f(x) for x in x_plt]

plt.ion() # interactive mode of plots
fig, ax = plt.subplots()
ax.grid(True)

ax.plot(x_plt, f_plt);
point = ax.scatter(x0, f(x0), c = 'red')


mn = 5
for i in range(n):
    l2 = 1 / min(i + 1, mn)
    x0 = x0 - l2*df(x0)
    
    point.set_offsets([x0, f(x0)])
    
    fig.canvas.draw()
    fig.canvas.flush_events()
    time.sleep(0.01)
    
plt.ioff()
print(x0)

ax.scatter(x0, f(x0), c = 'blue')
plt.show()
    