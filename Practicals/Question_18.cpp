#include <iostream>
using namespace std;

#define V 4

int countwalks(int graph[][V], int u, int v, int k)
{
    if (k == 0 && u == v)
        return 1;
    if (k == 1 && graph[u][v])
        return 1;
    if (k <= 0)
        return 0;

    int count = 0;

    for (int i = 0; i < V; i++)
        if (graph[u][i] == 1)
            count += countwalks(graph, i, v, k - 1);
    return count;
}

int main()
{
    int graph[V][V] = {{0, 1, 1, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 0}};
    int u = 0, v = 3, k = 2;
    cout << countwalks(graph, u, v, k);
    return 0;
}