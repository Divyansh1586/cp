#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

vector <int> dijkstra(int v, vector <vector <pair <int, int>>> &adj, int src){
    vector <int> dist(v, INT_MAX);
    priority_queue <pair <int, int>, vector <pair <int, int>>, greater <pair <int, int>>> pq;

    dist[src] = 0;
    pq.push({src, 0});

    while(!pq.empty()){
        int node = pq.top().first;
        int curDist = pq.top().second;
        pq.pop();

        for(auto it: adj[node]){
            int adjNode = it.first;
            int weight = it.second;

            if(curDist + weight < dist[adjNode]){
                dist[adjNode] = curDist + weight;
                pq.push({adjNode, dist[adjNode]});
            }
        }
    }
   

    return dist;
}

int main(){
    int v = 5;

    vector <vector <pair <int, int>>> adj(v);

    adj[0].push_back({1,2});
    adj[0].push_back({2,4});

    adj[1].push_back({2,1});
    adj[1].push_back({3,7});

    adj[2].push_back({4,3});

    adj[3].push_back({4,1});

    int src = 0;

    vector <int> dist = dijkstra(v, adj, src);

    for(int i = 0; i < v; i++){
        cout << dist[i] << " ";
    }

}
