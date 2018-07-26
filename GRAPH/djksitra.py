import sys
import heapq
def dj(G,s):
    n = len(G)
    vis = [-1]*n
    dist =[float("inf") for i in range(n)]
    li = [(0,s)]
    dist[s]=0
    heapq.heapify(li)
    while len(li):
        d,u = heapq.heappop(li)
        print(d,u)
        if vis[u]==1:continue
        else:
            vis[u]=1
            for v in G[u]:
                if dist[v[1]]>dist[u]+v[0]:
                    dist[v[1]]=dist[u]+v[0]
                    heapq.heappush(li,(dist[v[1]],v[1]))
    return dist
def bf(G,s):
    n = len(G)
    vis = [-1]*n
    dist =[float("inf") for i in range(n)]
    dist[s]=0
    
    for k in range(n):
        veri = False
        for u in range(n):
            for v in (G[u]):
                if dist[v[1]]>dist[u]+v[0]:
                    dist[v[1]]=dist[u]+v[0]
                    veri = True
    
        if(not veri):break
    return dist
    
def main():
    casos = int(sys.stdin.readline().strip())
    for i in range(casos):
        T = [int(x) for x in sys.stdin.readline().strip().split()]
        V = T[0]
        E = T[1]
        src = T[2]
        tgt = T[3]
        G = [[] for i in range(V)]
        for k in range(E):
            line =[int(x) for x in sys.stdin.readline().strip().split()]
            G[line[0]].append((line[2],line[1]))
        val = bf(G,src)[tgt]
        if(val == float("inf")):print("Caso {}: {}".format(i+1,"None"))
        else :print("Caso {}: {}".format(i+1,val))
main()

        
        
