import sys
from collections import *
#print path
def dfs(G,u,vis,t,path):
    vis[u]=1
    path.append(u)
    if(u==t):print(path)
    else:
        for v in G[u]:
            if(vis[v]==-1):
                vis[v]=1
                dfs(G,v,vis,t,path)
    path.pop()
    vis[u]=-1

def main():
    G =[]
    val = [int(x) for x in sys.stdin.readline().strip().split()]
    for i in range(val[0]):
        G.append([])
    for i in range(val[1]):
        L = [int(x) for x in sys.stdin.readline().strip().split()]
        G[L[0]].append(L[1])
    cam = [int(x) for x in sys.stdin.readline().strip().split()]
    dfs(G,cam[0],[-1]*len(G),cam[1],path=[])
main()

