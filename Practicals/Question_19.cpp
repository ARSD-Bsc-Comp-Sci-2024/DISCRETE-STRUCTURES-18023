#include <iostream>
using namespace std;

void check(int degList[], int n)
{
    int evenDeg = 0;
    int oddDeg = 0;
    for (int i = 0; i < n; i++)
    {
        if (degList[i] % 2 == 0)
            evenDeg += 1;
        else
            oddDeg += 1;
    }
    if (evenDeg == n)
        cout << "The graph is both an euler path and an euler circuit." << endl;
    if (oddDeg == 2)
        cout << "The graph is only an euler path not an euler circuit." << endl;
}

void calcDeg(int *adjMatrix, int n, int degList[])
{
    for (int i = 0; i < n; i++)
    {
        int deg = 0;
        for (int j = 0; j < n; j++)
        {
            if (*(adjMatrix + i * n + j) == 1)
            {
                deg += 1;
                cout << i << j << endl;
            }
        }
        degList[i] = deg;
    }
}

int main()
{
    int n;
    cout << "Enter number of vertices:";
    cin >> n;
    int adjMatrix[n][n];
    int degList[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adjMatrix[i][j] = 0;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adjMatrix[i][j];
        }
        cout << "A row of data has been entered." << endl;
    }
    cout << "\nAdjacency matrix for the data provided:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j] << "  ";
        }
        cout << endl;
    }

    calcDeg((int *)adjMatrix, n, degList);
    check(degList, n);

    return 0;
}