import sys
roots=[]
def find(x):
    global roots
    while x!=roots[x]:
        roots[x]=roots[roots[x]]
        x = roots[x]
    return x

def union(x,y):
    global roots
    p = find(x)
    q= find(y)
    roots[p]=roots[q]

def kruskal(G):
    T=[]
    costo=0
    for i in range(len(G)):
        if(find(G[i][0])!=find(G[i][1])):
            costo+=G[i][2]
            #T.append(G[i])
            union(G[i][0],G[i][1])
    
    return costo
    
def main():
    global roots
    T = [int(x) for x in sys.stdin.readline().strip().split()]
    V = T[0]
    E = T[1]
    G = []
    for k in range(E):
        valores = [int(x) for x in sys.stdin.readline().strip().split()]
        
        G.append([valores[0]-1,valores[1]-1,valores[2]])
    G.sort(key = lambda p: p[2])
    roots=[int(x) for x in range(V)]
    
    print(kruskal(G))
    
main()
