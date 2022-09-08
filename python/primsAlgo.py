#G = [[0,4,0,0,7],[4,0,1,3,0],[0,1,0,11,0],[0,3,11,0,9],[7,0,0,9,0]]
#G = [[0,9,75,0,0],[9,0,95,19,42],[75,95,0,51,66],[0,19,51,0,31],[0,42,66,31,0]]
G = [[0,3,1,4,0,0],[3,0,0,5,3,0],[1,0,0,5,0,3],[4,5,5,0,0,6],[0,3,0,0,0,2],[0,0,3,6,2,0]]
selected = [0,0,0,0,0,0]
minimum=99999
selected[0]=True
V = len(G)
for k in range(V-1):
    x=0
    y=0
    minimum = 99999
    for i in range(V):
        if (selected[i]):
            for j in range(V):
                if(G[i][j] and (not selected[j])):
                    if (G[i][j]<minimum):
                        minimum = G[i][j]
                        x=i
                        y=j
    print(str(y)+"-"+str(x)+":"+str(G[x][y]))
    selected[y]=True