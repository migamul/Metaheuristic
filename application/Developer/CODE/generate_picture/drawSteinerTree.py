import networkx as nx
import matplotlib.pyplot as plt
import numpy as np
import os.path

plt.ylim(-0.02,1.02)
plt.xlim(-0.02,1.02)
plt.gca().set_aspect('equal', adjustable='box')

f = open(os.path.join('txt','nodes.txt'), 'r')
n = int(f.readline())
f.close()

x, y = np.loadtxt(os.path.join('txt','nodes.txt'), skiprows=1, unpack=True)

G=nx.Graph()

for i in xrange(len(x)):
    G.add_node(i, pos=(x[i],y[i]))

f = open(os.path.join('txt','steinerPoints.txt'), 'r')
k = int(f.readline())
f.close()

if k!=0:
    sx, sy = np.loadtxt(os.path.join('txt','steinerPoints.txt'), skiprows=1, unpack=True)

    for j in xrange(k):
        x=np.append(x,sx[j]) 
        y=np.append(y,sy[j])

    for j in xrange(k):
        G.add_node(j+n, pos=(x[j+n], y[j+n]))

ex1, ey1, ex2, ey2 = np.loadtxt(os.path.join('txt','edges.txt'), unpack=True)

idx=[]
idy=[]

for i in xrange(len(ex1)):
    for j in xrange(len(x)):
        if ex1[i]==x[j] and ey1[i]==y[j]:
            idx=np.append(idx,j)

for i in xrange(len(ex2)):
    for j in xrange(len(x)):
        if ex2[i]==x[j] and ey2[i]==y[j]:
            idy=np.append(idy,j)

for i in xrange(len(idx)):
    G.add_edge(idx[i],idy[i])

pos=nx.get_node_attributes(G,'pos')

color_map = []
for node in G:
    if node <n:
        color_map.append('blue')
    else: color_map.append('red') 

nx.draw(G, pos, node_color= color_map, node_size=60)
plt.savefig('pic.png', format='PNG')

     


