#BFS
from collections import deque
def bfs(G,v):
    n=len(G)
    cola = deque()
    vis=[-1]*n
    
    cola.append(v)
    vis[v]=1
    while(cola):
        w = cola.popleft()
        print(w)
        for u in G[w]:
            if(vis[u]==-1):
                cola.append(u)
                vis[u]=1
    print(vis)

def main():
    G=[[1,2,5],[0],[0],[2,],[2],[0,3]]
    bfs(G,0)
main()
    
    
