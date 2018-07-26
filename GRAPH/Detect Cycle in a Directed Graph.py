#Detectando Ciclos en un grafo
#Se puede mejorar a un mas
from collections import deque
import sys

def dfs(G,u):
    n = len(G)
    vis=[-1]*n
    stackV = []
    pila = deque()
    pila.append(u)
    vis[u]=1
    stackV.append(u)
    while(pila):
        w = pila.pop()
        for v in G[w]:
            if(vis[v]==-1):
                vis[v]=1
                pila.append(v)
                stackV.append(v)
            elif(vis[v]==1 and v==u):
                return True
    return False

def main():
    G =[]
    val = [int(x) for x in sys.stdin.readline().strip().split()]
    for i in range(val[0]):
        G.append([])
    for i in range(val[1]):
        L = [int(x) for x in sys.stdin.readline().strip().split()]
        G[L[0]].append(L[1]) 
    veri=[]

    for i in range(val[0]):
        veri.append(dfs(G,i))
    if(True in veri):print(1)
    else:print(0)
        
main()
        
