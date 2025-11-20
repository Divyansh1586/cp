#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

vector<vector<vector<int>>> constructAdj(vector<vector<int>> &edges, int V)
{
    vector<vector<vector<int>>> adj(V);
    for (const auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    return adj;
}

vector<int> dijkstra(int v, vector<vector<int>> edges, int src)
{
    vector<vector<vector<int>>> adj = constructAdj(edges, v);

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    vector<int> dist(v, INT_MAX);

    pq.push({0, src});

    dist[src] = 0;
    while (!pq.empty())
    {
        int u = pq.top()[1];
        pq.pop();

        for (auto x : adj[u])
        {
            int vv = x[0];
            int weight = x[1];

            if (dist[vv] > dist[u] + weight)
            {
                dist[vv] = dist[u] + weight;
                pq.push({dist[vv], vv});
            }
        }
    }

    return dist;
}

int main()
{
    int v = 5;
    int src = 0;

    vector<vector<int>> edges = {{0, 1, 4}, {0, 2, 8}, {1, 4, 6}, {2, 3, 2}, {3, 4, 10}};

    vector<int> result = dijkstra(v, edges, src);

    for (int dist : result)
        cout << dist << " ";
}