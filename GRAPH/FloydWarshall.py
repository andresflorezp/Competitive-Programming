#Floyd Warshall
def floydW(G):
    n = len(G)
    for k in range(n):
        for u in range(n):
            for v in range(n):
                G[u][v]=min(G[u][v],G[u][k]+G[k][v])
    for i in G:
        print(i)
def main():
    INF = float("inf")
    G= [ [0,   5,  INF, 10],
                        [INF, 0,   3, INF],
                        [INF, INF, 0,   1],
                        [INF, INF, INF, 0]

                      ]
    floydW(G)
main()
