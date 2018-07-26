#Topo sort
L=[]
VIS=[]
def dfs(G,u):
    global VIS
    global L
    VIS[u]=1
    for v in G[u]:
        if(VIS[v]==-1):
            dfs(G,v)
    L.append(u)


def TopoSort(G):
    global L
    global VIS
    VIS=[-1]*len(G)
    for i in range(len(G)):
        if(VIS[i]==-1):
            dfs(G,i)

    print(L)

def main():
    
    G = [
    [1],
    [2],
    [13],
    [4,5],
    [],
    [4],
    [],
    [9],
    [],
    [],
    [8],
    [14,13],
    [9],
    [12,10],
    [8],
]
    TopoSort(G)
main()
    
    
    
