import networkx as nx
import matplotlib
import matplotlib.pyplot as plt
import numpy as np
import os

# koordinatne osi
plt.ylim(-0.02,1.02)
plt.xlim(-0.02,1.02)
plt.gca().set_aspect('equal', adjustable='box')

# koje datoteke koristimo
inst=10
slovo='a'
evol=50

f = open(os.path.join('instances','stp'+str(inst), 'stp'+str(inst)+slovo), 'r')
n = int(f.readline())
f.close()

x, y = np.loadtxt(os.path.join('instances','stp'+str(inst), 'stp'+str(inst)+slovo), skiprows=1, unpack=True)

G=nx.Graph()

for i in xrange(len(x)):
    G.add_node(i, pos=(x[i],y[i]))

f = open(os.path.join('drawSwarms','steinerPoints'+str(evol)+'.txt'), 'r')
k = int(f.readline())
f.close()
if k!=0:
    sx, sy = np.loadtxt(os.path.join('drawSwarms','steinerPoints'+str(evol)+'.txt'), skiprows=1, unpack=True)

    for j in xrange(k):
        x=np.append(x,sx[j]) 
        y=np.append(y,sy[j])

    for j in xrange(k):
        G.add_node(j+n, pos=(x[j+n], y[j+n]))

ex1, ey1, ex2, ey2 = np.loadtxt(os.path.join('drawSwarms','edges'+str(evol)+'.txt'), unpack=True)

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


P=nx.Graph()

f = open(os.path.join('drawSwarms','allSwarms'+str(evol)+'.txt'), 'r')
m = int(f.readline())
f.close()

px, py = np.loadtxt(os.path.join('drawSwarms','allSwarms'+str(evol)+'.txt'), skiprows=1, unpack=True)

for i in xrange(m):
    P.add_node(i, position=(px[i], py[i]))

position=nx.get_node_attributes(P,'position')

pos=nx.get_node_attributes(G,'pos')

color_map = []
for node in G:
    if node <n:
        color_map.append('blue')
    else: color_map.append('red') 

color = []
for node in P:
    color.append('green')
nx.draw(G, pos, node_color= color_map, node_size=60)
nx.draw(P, position,node_color = color, node_size=2)
plt.show()

     


