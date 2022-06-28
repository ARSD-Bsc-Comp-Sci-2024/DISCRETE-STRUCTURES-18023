#include <iostream>
using namespace std;

class Edge
{
public:
    int startingVertex;
    int endingVertex;
    void addEdge(int v, int u)
    {
        startingVertex = v;
        endingVertex = u;
    }
};

int main()
{
    int n;
    cout << "Enter total number of vertices in the graph:";
    cin >> n;
    int vertexList[n];
    for (int i = 0; i < n; i++)
    {
        vertexList[i] = i;
    }

    int e;
    cout << "Enter total number of edges in the graph:";
    cin >> e;
    Edge edgeList[e];

    int incidenceMatrix[n][e];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            incidenceMatrix[i][j] = 0;
        }
    }

    int v = 0, u = 0;
    for (int i = 0; i < e; i++)
    {
        cout << "Enter edge:" << endl;
        cin >> v >> u;
        edgeList[i].addEdge(v, u);
    }
    
    int i = 0, j = 0;
    for (int k = 0; k < e; k++)
    {
        i = edgeList[k].startingVertex;
        j = edgeList[k].endingVertex;
        incidenceMatrix[i][k] = 1;
        incidenceMatrix[j][k] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int outdeg = 0;
        int indeg = 0;
        for (int j = 0; j < e; j++)
        {
            if (incidenceMatrix[i][j] == 1)
                outdeg++;
            if (incidenceMatrix[i][j] == -1)
                indeg++;
        }
        cout << vertexList[i] << "\t"
             << "Indegree:" << indeg << " |"
             << "Outdegree:" << outdeg << endl;
    }
    return 0;
}
